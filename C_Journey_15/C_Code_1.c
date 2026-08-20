#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char stops[8][3] = {"TH","GA","IC","HA","TE","LU","NI","CA"};
    int path[8] = {800,600,750,900,1400,1200,1100,1500};

    char source[3], destination[3];
    int s = -1, d = -1;
    int distance = 0, i;
    float fare;

    scanf("%s", source);
    scanf("%s", destination);

    for(i = 0; source[i]; i++)
        source[i] = toupper(source[i]);

    for(i = 0; destination[i]; i++)
        destination[i] = toupper(destination[i]);

    for(i = 0; i < 8; i++)
    {
        if(strcmp(source, stops[i]) == 0)
            s = i;

        if(strcmp(destination, stops[i]) == 0)
            d = i;
    }

    if(s == -1 || d == -1 || s == d)
    {
        printf("INVALID OUTPUT");
        return 0;
    }

    i = s;

    while(i != d)
    {
        distance += path[i];
        i = (i + 1) % 8;
    }

    fare = ceil(distance * 5.0 / 1000);

    printf("%.1f INR", fare);

    return 0;
}
