#pragma once

#include <memory>
#include <unordered_map>

#include "ClientModel.hpp"
#include "SocketBase.hpp"

class ServerController{
    private:
        std::unordered_map< std::shared_ptr<Client>, std::shared_ptr<SocketBase> > *clients; //Create a class that abstracts how clients are stored
    
    public:
        ServerController();
        ~ServerController();
        void addClient(std::shared_ptr<Client> client, std::shared_ptr<SocketBase>);
        bool removeClient(std::shared_ptr<Client> client);
        bool sendMessageClient(std::shared_ptr<Client> client, std::string message);
        std::shared_ptr<Client> getClientByName(std::string name);
        std::shared_ptr<SocketBase> getSocketFromClient(std::shared_ptr<Client> client);
};