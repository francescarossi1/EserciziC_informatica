#include <stdio.h>
int tempo_to_sec(int ore, int minuti, int sec)
{
    return ore + minuti + sec;
}
int min_to_sec(int m)
{
    return m = m * 60;
}
int ore_to_sec(int o)
{
    return o = o * 60 * 60;
}
int main()
{
    int ore, minuti, secondi, tot_secondi;

    printf("Inserire ore, minuti, secondi di durata del cd audio:\n");
    scanf("%d %d %d", &ore, &minuti, &secondi);

    tot_secondi = secondi + minuti * 60 + ore * 60 * 60;

    printf("@%d@\n", tot_secondi);

    min_to_sec(minuti);
    ore_to_sec(ore);
    tot_secondi = tempo_to_sec(ore_to_sec(ore), min_to_sec(minuti), secondi);
    printf("I secondi totali sono: %d\n", tot_secondi);
}