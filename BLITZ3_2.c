// In a Chess match "a + b", each player has a clock which shows a minutes at the start and whenever a player makes a move, b seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. If the time on some player's clock hits zero (but not only in this case), this player loses the game.

// There's a 3 + 2 blitz chess match. After N turns (i.e. ⌊N+12⌋ moves made by white and ⌊N2⌋ moves made by black), the game ends and the clocks of the two players stop; they show that the players (white and black) have A and B seconds left respectively. Note that after the N-th turn, b=2 seconds are still added to the clock of the player that made the last move and then the game ends.

// Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t>0){
	    int n, a, b;
	    scanf("%d %d %d", &n, &a, &b);
	    int s = 2*(180 + n) - a - b;
	    printf("%d\n", s);
	    t--;
	}
	return 0;
}