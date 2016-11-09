#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void begegnungDerDrittenArt(int*, char**);
void hoehlenmensch(int*,char**);
void comingHome(int*,char**);
void notImplementedYet(int*);

int main(int argc, char const *argv[])
{
    char* eingabe = malloc(sizeof(char*)*10);
    char* waffe = malloc(sizeof(char*));
    int laeuft = 1; /*laeuft das Spiel oder bistu schon tot?*/
    
    
    
    while(laeuft){
      printf("\nEines morgens wachst du auf, und stellst fest, dass alle tot sind. Was machst du? \n (w = wegrennen, r = für die Zombie-Apokalypse rüsten)");
      scanf("%s",eingabe);
      if(*eingabe == 'r'){
	  
	  printf("Vor dir liegen ein Speer, eine Shotgun, eine Keule und ein Nutella-Glas (alter, was bist du für ein Nerd das so ein Zeug in deinem Zimmer liegt?). Du kannst aber nur eine Sache mitnehmen!");
	  while(laeuft){
	    printf(" Welche Waffe wählst du\? \n (s = Speer, g = Shotgun, k = Keule, n = Nutella-Glas) ");
	    scanf(" %s",waffe);
	    
	    if(*waffe == 's' || *waffe == 'k' || *waffe == 'n'){
	      printf("\nNach vier Stunden warten stellst du fest, dass bisher noch kein Zombie versucht hat, dein Gehirn zu fressen und auch sonst alles wenig nach Zombie-Apokalypse ausshieht. Was tust du\?");}
	    if(waffe[0]=='s'){
		
		while(laeuft){
		  printf("\n(w = Speer-Weitwurf, l = Limbo, a = du führst den Speer einem toten Menschen in eine Körperöffnung ein)");
		  scanf(" %s",eingabe);
		  if(*eingabe=='a'){
		      printf("\nBist du pervers????\n \n Aber meinetwegen. Du gehst zu einigen Leichen deiner Präferenz, und penetrierst sie mit deinem Speer.");
		      begegnungDerDrittenArt(&laeuft,&waffe);
		  }
		  if(*eingabe=='l'){
		      printf("\nWas nützt dir die längste Stange der Welt, wenn keiner dir die Stange hält\? (zwinkersmiley)\n");
		  
		      
		  }
		  if(*eingabe=='w'){
		      printf("\nHuuui! Weitwurf! Du hast den Speer jetzt extrem derbe hammer ultra mega weit geworfen. Zufrieden über deinen Triumpf stellst du dich aufrecht hin und blickst dem Speer hinterher. Anschließend drehst du dich um, damit zu zuhause nach einem Maßband sehen kannst, schließlich willst du ja sehen, wie weit der Speer geflogen ist. Plötzlich macht dich ein dunkler Schatten darauf aufmerksam, dass offenbar nur Menschen gestorben sind: Dein Speer traf offenbar einem Bär (das hat sich gereimt) direkt in dem Arm, der nun wütend hinter dir steht. Was machst du\?\n");
		      while(laeuft){
			printf("\n(hitler = du bringst dich um, putin = du gehst zum Bären, und zeigst ihm, wo der Hammer hängt, kim = du drohst dem Bären, ihn fertig zu machen, benali = Abhauen!!!)");
			scanf(" %s",eingabe);
			if(!strcmp(eingabe,"hitler")){
			  printf("Du nimmst also deine Zyancali-Kapsel aus deiner Hosentasche... Weil man so was ja immer dabei hat... Jetzt mal im Ernst, hinter dir steht ein Bär und du hast deinen Speer gerade weggeworfen. WIE ZUR HÖLLE willst du dich umbringen?");
			  		  
			}
			else if(!strcmp(eingabe,"putin")){
				printf("Der Bär versucht sich zwar zu wehren, aber du besteigst ihn und unter aterieneinfrierendem Kriegsgebrüll fängst du an, ihn zu reiten. Der Bär trägt dich in einen Wald, der viele Kilometer von deiner Heimat entfernt liegt. Dort fällt er plötzlich tot um, weil sein Blut über die Verletzung am Arm wohl infiziert wurde.");
				//TODO
				notImplementedYet(&laeuft);
			}
			else{
			  printf("\nKannschtu nich richtik schreibn oda waaas\?\?\?\?!!!!!1111\n");
			  
			}
						
		      }
		      break;		
		  }
		  
		}
	    }
	    else if(waffe[0]=='g'){
	      printf("\nDu wähltest die stärkste aller Waffen. Geh hin und gebrauche sie weise.");
	      while(laeuft){
		printf("\n(s = du posierst mit der Waffe für ein Selfie, indem du dir die Waffe an den Kopf hälst, d = du ziehst dich nackt aus, rennst aufs Dach und schießt in den Himmel bis sämtliche Munition verbraucht ist, e = du erkennst, dass Waffen nur Leid verursachen und dass alles Schlechte in der Welt von Waffen verursacht wurde (nicht von ihren Besitzern) und wirst Pazifist, k = du nimmst die Waffe auseinander, bastelst aus ihren Einzelteilen eine Installation und stellst diese in ein Museum neben namhafte Größen der Kunsthistorie)");
		//TODO
		notImplementedYet(&laeuft);
		
	      }
	      //TODO
		notImplementedYet(&laeuft);
	    }
	    else if(waffe[0] == 'k'){
		printf("\n(h = du ziehst in den Wald und wirst Höhlenmensch, s = du baust dir ein Schlagzeug aus den Mülltonnen deines Nachbars der immer so geheimnisvoll tut und schlägst mit der Keule drauf ein)");
		scanf(" %s",eingabe);
		//TODO	
		notImplementedYet(&laeuft);
	    }
	    else if(waffe[0] == 'n'){
		printf("\n(e = Nutella aufessen, p = du wirst paranoid, verbarrikadierst dich und verehrst die Nutella als heiligen Gral)");
		//TODO
		notImplementedYet(&laeuft);
	    }
	    
	    else{
		 printf("\nNein, mehr ist da nicht. Außer ein paar Unterhosen. Du könntest auch mal eine neue gebrauchen. Also, meinetwegen, du wechselt die Unterhose. Aber dann wählst du eine Waffe.");
	    }
	  }
	  break;
      }
      else if (*eingabe == 'w'){
	  printf("\nDu stellst nach 278 Kilometern Rennen fest, dass das die Leute auch nicht wieder lebendig gemacht hat. Was tust du\? \n (n = nach Hause gehen und N64 zocken, l = loot, loot, loot, epic loooot!, d = duschen)");
	  while(laeuft){
	    scanf("%s",eingabe);
	    if(*eingabe == 'n'){
	      printf("\nDu machst dich also auf den Weg, die 278 Kilometer nach Hause zu latschen. Dafür brauchst du 3 Tage, und du fragst dich, wie du es bei deiner Kondition hinbekommen hast, diesen Weg so schnell und am Stück zu rennen. Aber immerhin haben sich jetzt all deine Pokémon bei Pokémon Go um 6 Stufen weiterentwickelt. \n");
		comingHome(&laeuft,&waffe);
			      
		}
	    else if(*eingabe == 'l'){
	      printf("\nDu durchsuchst einige der in der Gegend rumliegenden Leichen nach coolem Zeug, das du gebrauchen kannst. Du findest ein Buttermesser, ein Portemonnaie voller Wurfgeld (die 1- 2- und 5-Cent-Münzen, mit denen man eh nichts machen kann außer sie wegzuwerfen), ein Klavier und einen Flammenwerfer. Du kannst aber nur eine Sache tragen! "); 
		
		printf("Was nimmst du mit? \n (b = Buttermesser, w = Wurfgeld, p = Piano, f = Flammenwerfer, n = Nichts, diese Waffen sind unter meiner Würde. Ich suche weiter.)");
		scanf(" %s",waffe);
		if(*waffe == 'b' || *waffe == 'w' || *waffe == 'p' || *waffe == 'f'){
			printf("Eine weise Entscheidung. Du steckst die Waffe ein, und merkst, dass es eine Scheiß-Entscheidung war, was haben die Leute auch nur so einen Ramsch dabei? Also entschließt du dich, doch weiter zu suchen. \n");			
		}
		else{
			waffe = "";			
		}

		
		printf("\nDu suchst also weiter. Dabei fasst du einige der Männer an den Penis (wenn du eine heterosexuelle Frau oder ein homosexueller Mann bist) bzw. einige Frauen an die Brüste (wenn du ein heterosexueller man oder eine homosexuelle Frau bist) oder an den Hintern (wenn du Paul bist). \n");
	    
	    begegnungDerDrittenArt(&laeuft,&waffe);
	    }
	    
	    else if(*eingabe == 'd'){
		printf("Du machst dich also auf den Weg und suchst nach einer Dusche. Du stellst fest, dass Duschen nicht einfach so in der Gegegend rumstehen und darauf warten, dass du \"e\" drückst um sie zu benutzen. Was tust du also?");
		while(laeuft){
			printf("\n(s = du suchst ein Schwimmbad und brichst dort ein, w = du wartest, bis es regnet, f = du gehst zur Feuerwehr)");
			scanf(" %s", eingabe);		
			notImplementedYet(&laeuft);
			//TODO
		}
	  }
	
	}
      }
      else 
	printf("\nKannschtu nich richtik schreibn oda waaas\?\?\?\?!!!!!1111\n");
      
    
    }
    return 0;
}
void begegnungDerDrittenArt(int* laeuft, char** waffe){
	char* eingabe;	
	printf("\nPlötzlich erscheint eine schwebende Gestalt vor dir. So wie die aussieht, war die Annahme mit der Zombie-Apokalypse vielleicht gar nicht so falsch. Die Gestalt fängt an zu sprechen: \n \n \"Ich bin der Geist von Donald Trump! Du hast Menschen ohne ihr Einverständnis sexuell belästigt. Auch wenn die Menschen schon tot sind - willkommen im Club, man! Du bist jetzt einer von uns! Komm mit mir mit in ein anderes Reich!\"");
	while(*laeuft){
		printf("\n\nWillst du mit Donald Trump in die Hölle kommen? \n (j = ja, n = nein)");
		scanf(" %s",eingabe);
		if(*eingabe == 'j'){
			printf("Du entscheidest dich also, mit Donald Trump in die Hölle hinabzufahren. Ein Riss im Boden öffnet sich, und du wirst mit Haus und Haaren hinabgesogen.");
			notImplementedYet(laeuft);		
		}
		else if(*eingabe == 'n'){
			printf("Trump besteht allerdings darauf, dass du mitkommst. Er ist gerade dabei, sein Portal zu öffnen, das aus einem Riss im Boden besteht. Jetzt musst du schnell handeln! Wie willst du Trump davon abhalten, dich in die Hölle zu schicken? \n (");
			if(**waffe == 's'){
				printf("e = du versuchst ihn mit deinem Speer zu erstechen,");
			}
			else if(**waffe == 'b'){
				printf("e = du versuchst, Trump mit deinem Buttermesser zu erschießen, ");
			}
			else if(**waffe == 'w'){
				printf("w = Trump mit dem Wurfgeld abwerfen, b = Trump mit dem Wurfgeld bestechen, ");
			}
			else if(**waffe == 'p'){
				printf("h = du zückst dein Klavier aus der Hosentasche und gibst Trump eine Hörprobe deutscher Kultur, in dem du ihm von Wolgang Petry den Schlager \"Wahnsinn, warum schickst du mich in die Hölle\?\" vorspielst, ");
			}
			printf("c = du rufst dreimal laut \"Clinton\", t = du sagst ihm, er habe Twitter-Verbot)");
			scanf(" %s",eingabe);
			
			if(*eingabe == 'e' && **waffe == 's'){
				//TODO
			}
			else if(*eingabe == 'e' && **waffe == 'b'){
				//TODO
			}
			else if(*eingabe == 'w' && **waffe == 'w'){
				//TODO
			}
			else if(*eingabe == 'b' && **waffe == 'w'){
				//TODO
			}
			else if(*eingabe == 'h' && **waffe == 'p'){
				//TODO
			}
			
			notImplementedYet(laeuft);
			//TODO


		}
	}
}

void comingHome(int* laeuft, char** waffe){
	char* eingabe;
	printf("\n\nZuhause angekommen stellst du fest, dass deine Wohnung von mutierten Killerameisen übernommen wurde, die Knochen als Kopfschmuck tragen und auch sonst dem antiquitierten Klischee des wilden Negers entsprechen. Was tust du? \n\n (k = versuchen, mit den Ameisen auf Negerisch zu kommunizieren, ");
	if(**waffe == 'n')
            printf("n = du versuchst, sie mit der Nutella wegzulocken, ");
        else if(**waffe == 'k')
            printf("s = mit der Keule auf die Viecher einschlagen, ");
	printf("u = umziehen)");
	scanf(" %s",eingabe);	
	notImplementedYet(laeuft);
	//TODO
}

void hoehlenmensch(int* laeuft, char** waffe){
	notImplementedYet(laeuft);
}

void notImplementedYet(int* laeuft){
	
	printf("\nJa, tut mir leid, aber leider ist das Programm hier zuende. Das liegt daran, dass der Jano zu faul war hier weiterzuprogrammieren. Du, als enttäuschter und geprellter Nutzer, kannst jetzt folgendes tun: \n\n 1. Du trittst dem Jano in den Arsch, dass er das gefälligst fertig programmieren soll. \n\n 2. Du beteiligst dich selbst am Projekt und führst es weiter. Dafür gehst du einfach auf github.com/... Ach ja, Notiz an mich selbst: Das Programm auf Github stellen!\n");
	*laeuft = 0;
}
