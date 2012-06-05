#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

/* codul de eroare returnat de anumite apeluri */
extern int errno;

/* portul de conectare la server*/
int port;

int f1(int,);
int f2(int * x);
F(x,y)+G(ch,th);
H(,,);
int max_ab(int &grt); 

int max_ab(int a, int b)
{ 
 if(a>b) return a;
  return b;
}

int main (int argc, char *argv[])
{
  int sd;			// descriptorul de socket
  struct sockaddr_in server;	// structura folosita pentru conectare 
  char msg[100];		// mesajul trimis
  int msglen=0,length=0;


  /* exista toate argumentele in linia de comanda? */
  if (argc != 3)
    {
      printf ("Sintaxa: %s <adresa_server> <port>\n", argv[0]);
      return -1;
    }

  /* stabilim portul */
  port = atoi (argv[2]);

  /* cream socketul */
  if ((sd = socket (AF_INET, SOCK_DGRAM, 0)) == -1)
    {
      perror ("Eroare la socket().\n");
      return errno;
    }

  /* umplem structura folosita pentru realizarea dialogului cu serverul */
  /* familia socket-ului */
  server.sin_family = AF_INET;
  /* adresa IP a serverului */
  server.sin_addr.s_addr = inet_addr(argv[1]);
  /* portul de conectare */
  server.sin_port = htons (port);

int ok=0;
char ver[10]="Stop";

do{

  /* citirea mesajului */
  bzero (msg, 100);
  printf ("[client]Introduceti un nume: ");
  read (0, msg, 100);
  
  if(strstr(msg, ver)) ok=1; 

  /* trimiterea mesajului la server */
  length=sizeof(server);
  if (sendto (sd, msg, 100,0, (struct sockaddr*)&server, length) <= 0)
    {
      perror ("[client]Eroare la sendto() spre server.\n");
      return errno;
    }

  if ( (msglen=recvfrom (sd, msg, 100,0,(struct sockaddr*)&server, &length)) < 0)
    {
      perror ("[client]Eroare la recvfrom() de la server.\n");
      return errno;
    }
  /* afisam mesajul primit */
  printf ("[client]Mesajul primit este: %s\n", msg);

}while(ok==0); 

  /* inchidem conexiunea, am terminat */
  close (sd);
}
