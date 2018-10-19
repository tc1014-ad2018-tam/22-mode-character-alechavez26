/* 
 * Alejandra Chavez Cruz
 * A01411970@itesm.mx
 * 18/oct/18
*/

#include <stdio.h>
#include <string.h>

int main() {
    char string[250];
    int count=0;
    char m=string[0];
    int a=0;
    
    // Here I ask the user for the string.
    printf("Give me a string: \n");
    fgets(string, sizeof(string), stdin);

    // Here I compare the values
    for (int i=0; i<strlen(string); i++){
        count=0;
        for (int j=i+1; j<strlen(string); j++){
            // This part will avoid to count spaces
            if (string[j] == string[j] && string[j]!= ' '){
                count++;
            }
        }
        // Here I store the repeated values
        if (count>a){
            a=count;
            m=string[i];
        }
    }

    printf("The most repeated character is %c", m);

return 0;
}
