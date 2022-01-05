# Min-Max Algorithm in Game Theory

It is a backtracking algorithm.

It is used in decision-making and game theory.

While applying this algorithm we assume that both the players are playing optimally.

## Working:

Consider the following scenarios and their respective evaluation scores:

<img src='https://user-images.githubusercontent.com/65852362/142987779-ec1f402d-93bf-471e-baa3-bb4923e6b872.png' style='height: 50%; width: 50%'>

Here, we can clearly see from the image that if the game-score is 1 then 'X' wins, if it is -1 then 'O' wins or if it is 0 then no one winds.

<b>Thus, the increase in the value of game-score is beneficial for X and decrease in the value is beneficial for O.</b>

So, during X's turn, we will apply maximizer algorithm and during Y's turn we will apply minimizer algorithm.

### Consider the following terms which we will use while applying the algorithm:

S<sub>0</sub> : initial state

<img src='https://user-images.githubusercontent.com/65852362/142987818-6c7b8cdf-a4be-4448-8715-6927aa077ec0.png' style='height: 25%; width: 25%'>

Player(s): represents the player whose turn is to move in state 's'

<img src='https://user-images.githubusercontent.com/65852362/142987879-edff0d1c-f18f-4276-a720-a8f495820b8a.png' style='height: 35%; width: 35%'>

Actions(s): returns possible legal moves in state 's'

<img src='https://user-images.githubusercontent.com/65852362/142987926-c4f80726-0aba-4a38-a704-eaa580bd3037.png' style='height: 50%; width: 50%'>

Result(s, a): returns the final state as a result of action 'a' applied on state 's'

<img src='https://user-images.githubusercontent.com/65852362/142987975-05215249-aa65-42b6-9ff7-bb90028801b2.png' style='height: 50%; width: 50%'>

Terminal(s): checks whether the state 's' is the terminal state or not

<img src='https://user-images.githubusercontent.com/65852362/142988038-f4dfbdbd-9ff9-4b56-a3e2-3f9953805a3a.png' style='height: 50%; width: 50%'>

Utility(s): returns the final game score for the terminal state 's'

<img src='https://user-images.githubusercontent.com/65852362/142988074-dcc85b95-5dd3-4ccc-b87f-657eb0b50cf6.png' style='height: 35%; width: 35%'>

Consider the following scenario where it is the turn of 'O' to make the move:

<img src='https://user-images.githubusercontent.com/65852362/142988351-35de7ec2-483f-4ed5-9dbb-011c6f9e4f9e.png'>


Here, to make player 'O' take the optimal move, we need to choose  the move with the minimum game value from the available choices.

Here, there are two possibilities for X to be placed and we will assume that player-X will also play optimally.

So we will apply maximizer function on X i.e. it will choose the move which will lead to max-game value.

And then we will choose the minimum value for player 'O' from the set of values which we obtained by applying maximizer function on 'X'.

We can clearly see that, from both the possible placements of X, the right hand side one has the minimum game value. 

```
min(1,0) = 0
```

So we will choose the right hand side option with game value '0' as we are applying minimizer function for player 'O'.

Thus, in this manner we will apply the maximizer algorithm for player 'X' and minimizer algorithm for player 'O'.

You can refer to the below image for more understanding.

<img src='https://user-images.githubusercontent.com/65852362/142988136-400cb2ff-4a77-4b06-8fac-5f2423ef5fec.png' style='height: 70%; width: 70%'>

Here, on the root we are applying mazimizer algorithm as it is player X's turn.

```
max(0, -1, 1) = 1
```

Thus, we will choose the right most option with game-value '1', as it results into the win of player 'X'.

Now, to simplify this, we can consider this scenario in the form of a tree, where each node represents game-score and we will apply the same method to obtain the optimal score for each player on every level.

<img src='https://user-images.githubusercontent.com/65852362/142988424-940465eb-cc4b-4be6-a051-b44dfc56696a.png'>

Here, the red colored inverse triangle represents minimzer function and green colored upward triangle represents maximer function.

On, second level we applied the maximizer function and have chosen the maximum values from those available on third level.

```
max(5,3,9) = 9
max(2,8) = 8
```

Now, on the root level we have applied the minimizer function and have chosen the minimum values from those available on second level.

```
min(9,8) = 8
```

Thus, in this way we have selected the optimal move for the player at the root node.

## Algorithm:

Given a state 's',

<b>MAX</b> selects an action 'a' among ACTIONS(s) which produces the highest value of <b>MIN-VALUE(RESULT(s,a))</b>.

<b>MIN</b> selects an action 'a' among ACTIONS(s) which produces the lowest value of <b>MAX-VALUE(RESULT(s,a))</b>.

```
function MAX-VALUE(state):
    if TERMINAL(state):
        return UTILITY(state)
    v = -∞
    for action in ACTIONS(state):
        v = MAX(v, MIN-VALUE(RESULT(state, action)))
    return v

function MIN-VALUE(state):
    if TERMINAL(state):
        return UTILITY(state)
    v = ∞
    for action in ACTIONS(state):
        v = MIN(v, MAX-VALUE(RESULT(state, action)))
    return v
```

## Implementation in Python:

```Python
import math

def minimax (current_depth, nodeIndex,
			maximizer_turn, game_score,
			target_depth):

	# base case : target_depth reached
	if (current_depth == target_depth):
		return game_score[nodeIndex]
	
	# Max-Value function
	if (maximizer_turn):
		return max(minimax(current_depth + 1, nodeIndex * 2,
					False, game_score, target_depth),
				minimax(current_depth + 1, nodeIndex * 2 + 1,
					False, game_score, target_depth))
	
	# Min-Value function
	else:
		return min(minimax(current_depth + 1, nodeIndex * 2,
					True, game_score, target_depth),
				minimax(current_depth + 1, nodeIndex * 2 + 1,
					True, game_score, target_depth))

game_score = [8, 9, 4, 3, 7, 16, 19, 39]

tree_depth = math.log(len(game_score), 2)

# In the minimax function, true represents that it is maximizer's turn and 
# false represents that it is minizer's turn,
print(f"The optimal value is : {minimax(0, 0, True, game_score, tree_depth)}")
```

### Output:

The optimal value is : 16

## Properties of Min-Max Algorithm:

<b>Optimal</b>: As both the opponents are playing optimally, so the overall algorithm results into optimal value.

<b>Complete</b>: It will always return a solution for a finite search tree, thus it is a complete algorithm.

## Time-Complexity:

The time-complexity of min-max algorithm is <b>O(b<sup>m</sup>)</b>, where m represents the maximum depth of the search tree and b represents the branching factor. 

<b> In game theory, branching factor is the number of child nodes for a given parent node, also known as outdegree.</b>

Here, it is basically performing a DFS search.

## Space Complexity:

The space complexity of min-max algorithm is O(bm).

## Applications:

It is extensively used in decision making and game theory.

It is mostly used for game-playing with the implementation of artificial intelligence.

It is used in games like chess, checkers, tic-tac-toe, etc.

## Limitations:

The major limitation of this algorithm is that it is really slow for complex games such as chess where the branching factor is very large and at each level the player has lots of possible actions to choose from. 

But, we can improve the complexity of this algorithm with the help of alpha-beta pruning.

<b>Alpha-beta pruning is same as the standard algorithm except that it removes all the nodes which doesn't affect the final decision and were unnecessarily increasing the complexity of the algorithm.</b>

Thank you! I hope now you understood the working and implementation of min-max algorithm alongwith its properties, applications and limitations.
