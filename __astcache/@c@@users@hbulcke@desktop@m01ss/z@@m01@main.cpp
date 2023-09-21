#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP.h"
#include <string>
#include "IRClientUDP.h"

int main()
{
    IRClientUDP client;
    client.OuvrirLaSocketDeCommunication("172.20.21.157",4002);
    client.EnvoyerUnMessage(msg);
    client.FermerLaSocket();

    IRServeurUDP serveur;
    serveur.OuvrirLaSocketDEcoute(4002);
    std::string msg;
    serveur.RecevoirUnMessage(msg);
    serveur.FermerLaSocket();

    IRJournalLumineux journal;
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame(msg);
    journal.FermerPortSerie();
}
