// This is a port scanner developed in C# for ethical hacking and educational purposes.

using System;

namespace PortScanner
{
    public class Program
    {
        private static char sIP;
        private static char sPort;
        private static char firstPort;
        private static char secondPort;

        static void Main(int argport1, int[] argports )
        {
            // Have user enter IP address and range for IPv4

            if ( argport1 < 4 )
            {
                Console.WriteLine("Enter IP address and port range here: " );
                string ip = Console.ReadLine();
                string port = Console.ReadLine();
                Console.WriteLine("IP is: " + ip + " and port range is: " + port);
                Console.WriteLine("Use: $s IPv4 First Port, Last Port", argports[0]);
                
            }
            // Otherwise, set up and copy ports here.
            else
            {
                char [] sIP = new char[argports.Length];
                for ( int i = 0; i < argports.Length; i++ )
                {
                    sIP[i] = (char)argports[1];
                }

                char [] firstPorts = new char[argports.Length];
                for ( int i = 0; i < argports.Length; i++ )
                {
                    firstPorts[i] = (char)argports[2];
                }

                char [] secondPorts = new char[argports.Length];
                for ( int i = 0; i < argports.Length; i++ )
                {
                    secondPorts[i] = (char)argports[3];
                }
            }

            char scanner = sIP, firstPort , secondPort;
            Console.WriteLine(scanner);
        }
    }

    public class SocketsHttpConnectionContext
    {
        public void Connect(System.Net.EndPoint remoteEP)
        {
            Console.WriteLine("Initializing Connection...");
            Console.WriteLine(remoteEP.ToString());
            Console.WriteLine("Established Connection!");
            Console.WriteLine("Ports open: " + remoteEP.ToString());
        }
    }
}
