#include "ClientModel.hpp"

Client::Client(ClientID id) {
    this->id = id;
    this->muted = true;
}

Client::~Client() {
}

ClientID Client::getId() {
    return this->id;
}

std::string Client::getName() {
    return this->name;
}

void Client::changeName(std::string name) {
    this->name = name;
}

void Client::mute() {
    this->muted = true;
}

void Client::unmute() {
    this->muted = false;
}

bool Client::canTalk() {
    return !this->muted;
}

bool Client::operator== (const Client &c) const
{
    if(c.name == this->name) {
        return true;
    } else {
        return false;
    }
}