#include<stdio.h>

int main(){
    int testcases,g_army,m_army,i,j;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      
                      scanf("%d %d",&g_army,&m_army);
                      int g_strength[g_army];
                      int m_strength[m_army];
                      for(i=0;i<g_army;i++)
                          scanf("%d",&g_strength[i]);
                      for(i=0;i<m_army;i++)
                          scanf("%d",&m_strength[i]);
                      i=0,j=0;
                      while(i<g_army && j<m_army){
                                     if(g_strength[i]<m_strength[j]){
                                                                      i++; 
                                                                     }
                                     else
                                          j++;
                                     
                                     }
                                     if(j>=m_army)
                                          printf("Godzilla\n");
                                     else if(i>=g_army)
                                          printf("MechaGodzilla\n");
                                     else
                                          printf("Uncertain\n");
                      }
    getch();
    return 0;
    
    }
