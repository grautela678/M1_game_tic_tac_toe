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
- START
- User1 wins
- User2 wins
- Draw
