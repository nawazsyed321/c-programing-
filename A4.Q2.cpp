#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 11

struct player {
    char name[50];
    int runs_scored;
};
int main() {
    struct player team[MAX_PLAYERS];
    int num_players, total_runs = 0;
    printf("Enter the number of players: ");
    scanf("%d", &num_players);
    for (int i = 0; i < num_players; i++) {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter the runs scored by %s: ", team[i].name);
        scanf("%d", &team[i].runs_scored);
        total_runs += team[i].runs_scored;
    }
    printf("\nBatting Information:\n");
    for (int i = 0; i < num_players; i++) {
        printf("%s\t\t%d\n", team[i].name, team[i].runs_scored);
    }
    printf("Total runs scored: %d\n", total_runs);
    return 0;
}
