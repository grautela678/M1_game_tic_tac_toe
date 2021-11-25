# INTRODUCTION
## Welcome to the tic_tac_toe game.
- The game is to be played between two people (in this program between two HUMANS).
- One of the player chooses ‘O’ and the other ‘X’ to mark their respective cells.
- The game starts with one of the players and the game ends when one of the players has one whole row/ column/ diagonal filled with his/her respective character (‘O’ or ‘X’).
- If no one wins, then the game is said to be draw.

# RESEARCH
- Alexander Sandy Douglas' thesis was a success, earning him his Ph.D. and starting his career in science, however, he would never again program another video or computer game.
- Although OXO was the very first video/computer game, it was almost completely overlooked at the time. There was only one EDSAC computer in existence, which was housed at the University of Cambridge and never made accessible to the public.
- The code for OXO was retained as a tech demo for the EDSAC's capabilities.
# FEATURES
- The game is played on a grid that's 3 squares by 3 squares.

- You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.
- The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.
- When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.
![Alt Text](https://github.com/grautela678/M1_projecttype_goal/blob/main/1_Requirements/1_kdY26OPGZbeNKJs60q0zUg.png)
# 4W'S AND 1H
## WHO
- Anyone who wants to play tic-tac-toe can play.
## WHAT
- It is a game played by two players for fun.
## WHEN
- Whenever the players wants to play to increase their fun.
## WHY
- This project can easily teach beginners and this gives relief to them.
## HOW
- The players can play the game after running the program.
# SWOT
## STRENGTH
- Anybody can play this game.
- It's a mind refreshing game.
## WEAKNESS
- The time period of game is very short.
## OPPORTUNITIES
- The game provides a opportinity to play two players at a time.
## THREATS
- After playing for a long time it will be boring.
# DETAIL REQUIREMENTS
## HIGH LEVEL REQUIREMENTS
| ID | DESCRIPTION | STATUS |
| :---         |     :---:      |          ---: |
| HLR1   | User able to choose 'X' to play   | Implemented    |
| HLR2   | User able to choose 'O' to play      | Implemented      |
| HLR3   | User able to Exit the game   |Implemented    |
| HLR4   | User loses   | Implemented      |
| HLR5   | User shall wins | Implemented    |
| HLR6   | Draw situation       | Implemented     |
## LOW LEVEL REQUIREMENTS
| ID | DESCRIPTION | STATUS |
| :---         |     :---      |        :--- |
| LLR1   |If the user is playing with 'X', he'll get the first turn   | Implemented    |
| LLR2   | If the user is playing with 'O', he'll get the second turn   | Implemented      |
| LLR3   | User able to Exit the game   |Implemented    |
| LLR4   | If the user1 gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User2 will lose  | Implemented      |
| LLR5   | If the user2 gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User1 will lose | Implemented    |
| LLR6   | If the total number of moves, i.e., 9 moves have been completed and neither the user1 nor the user2 has won, it will end up in a draw     | Implemented     |

# TEST PLAN
## HIGH LEVEL TEST PLAN
| TEST ID | DESCRIPTION | INPUT |OUTPUT |
| :---         |    :---     |          :--- |          :--- |
| HL1   | Check if the 3X3 graph is drawn or not  | NA    | Drawn   |
| HL2   | Check if the user1/user2 can give input at any empty place     | User1/user2 gives input 'X' and 'O'     | Inputs can be given at any empty place   |
| HL3   | Check if user1/user2 gets his inputs in vertical, horizontal, Diagonal form   | Inputs given by the user1/user2    |User1/user2 won the game |
| HL4   | If no one gets his inputs in vertical, horizontal, Diagonal form | All the places are full    |Game draw   |
## LOW LEVEL TEST PLAN
| TEST ID | DESCRIPTION | INPUT |OUTPUT |
| :---         |    :---     |          :--- |          :--- |
| LL1   | Checking for the basic requirement to the game, i.e., a 3X3 graph is drawn or not. This 3X3 graph is the basic need to play the game as it is like a game board for the game.  | NA    | Drawn   |
| LL2 | 	Play proceeds with the user1/user2 alternately placing their marks in any unoccupied cell. Check if any user1/user2 finishes with 3 marks in a row(vertical, horizontal or diagonal).  | Inputs given by the user1/user2    |User1/user2 won the game |
| LL3   | Check if a total of 9 moves have been made( combining that of user1 and user2), the game ends up in a draw when neither the user1 nor the user2 is able to get 3 marks in a row. | All the places are full    |Game draw   |
# OUTPUT
## START


![Alt Text](https://github.com/grautela678/M1_game_tic_tac_toe/blob/main/6_ImagesAndVideos/1.jpg)

## USER1 WINS


![Alt Text](https://github.com/grautela678/M1_game_tic_tac_toe/blob/main/6_ImagesAndVideos/2.jpg)

## USER2 WINS


![Alt Text](https://github.com/grautela678/M1_game_tic_tac_toe/blob/main/6_ImagesAndVideos/3.jpg)

## DRAW


![Alt Text](https://github.com/grautela678/M1_game_tic_tac_toe/blob/main/6_ImagesAndVideos/4.jpg)
