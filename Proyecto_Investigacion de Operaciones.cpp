#include <stdio.h> 
#include <windows.h>
using namespace std;


int main(){
	int c[20][20], i, j, min, m, n, b, d, c2, c1, p, q;
	int dem[20],sup[20],rf[20],cf[20],sum=0;
	printf("\nIngrese Numero de Filas: ");
  	scanf("%d", &m);
  	printf("\nIngrese Numero de Columnas: ");
  	scanf("%d", &n);
  	system("cls");
  	printf("\nMatriz %dx%d", m, n);
  	printf("\n---Ingrese los Costos Correspondientes---\n");         //matrix
    for(i=0;i<m;i++)
        {
        for(j=0; j<n; j++)
   		    {
            printf("Espacio (%d,%d): ", (i+1), (j+1));
            scanf("%d", &c[i][j]);
        }
    }

  	printf("\n---Ingrese las Demandas---\n");
  	for(i=0; i<n; i++){
		printf("Demanda %d: ", (i+1));
   		scanf("%d", &dem[i]);
  	}

  	printf("\n---Ingrese las Capacidades---\n");
  	for(i=0; i<m; i++){ //
  		printf("Capacidad %d: ", (i+1));
   		scanf("%d", &sup[i]);
  	}
	
	for(i=0; i<=10; i++){
		Sleep(100);
		printf("-");
	}
	system("cls");
  	printf("-----Matriz-----\n");
  	printf("        \t", (i+1));
  	for(i=0; i<n; i++)
  		printf("Col %d:\t", (i+1));
  	printf("Cap.");
  	printf("\n");
  	for(i=0; i<m; i++){
  		printf("Fila     %d:\t", (i+1));
    	for(j=0; j<n; j++)
        	printf("%d      ", c[i][j]);
        printf("%d\n", sup[i]);
    }
    printf("Demandas %d:\t", (i+1));
  	for(j=0; j<n; j++)
   		printf("%d       ", dem[j]);



  	for(i=0; i<m; i++)
   		rf[i]=0;
  	for(i=0; i<n; i++)
   		cf[i]=0;
  	b=m;
  	d=n;


  	while(b>0 && d>0)
  	{ 
		min=1000;
    for(i=0; i<m; i++)
    { 
		if(rf[i]!=1)
      	{ 
		  	for(j=0; j<n; j++)
    		{ 
				if(cf[j]!=1)
      			{ 
				  	if(min>c[i][j])
        			{ 
						min=c[i][j];
           				p=i;
           				q=j;
        }
      }
    }
      }
    }
    if(sup[p] < dem[q])
     c1=sup[p];
    else
     c1=dem[q];



    for(i=0; i<m; i++)
    { if(rf[i]!=1)
      { for(j=0; j<n; j++)
    { if(cf[j]!=1)

{ if(min==c[i][j])
        { if(sup[i]<dem[j])
           c2=sup[i];
          else
           c2=dem[j];

          if(c2>c1)
          { c1=c2;
        p=i;
        q=j;
          }
        }
      }
    }
      }
    }
    if(sup[p]<dem[q])
    { sum+=c[p][q]*sup[p];
      dem[q]-=sup[p];
      rf[p]=1;
      b--;
    }
    else
    if(sup[p]>dem[q])
    { sum=sum+c[p][q]*dem[q];
      sup[p]-=dem[q];
      cf[q]=1;
      d--;
    }
    else
    if(sup[p]==dem[q])
    { sum=sum+c[p][q]*sup[p];
      rf[p]=1;
      cf[q]=1;
      b--;
      d--;
    }
  	}
  	printf("\n---------------\n\n\tCosto Total: %d\n\n", sum);
  	printf("1)SALIR 2)NUEVA OPERACION\n\t");
  	scanf("%d", &i);
  	if(i==1){
  		return 0;
	  }
	if(i==2){
		system("cls");
		return main();
	}
}
