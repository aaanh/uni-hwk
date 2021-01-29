Over the course, I will provide a number of bonus question to motivate further exploring the technique we learn to solve problems. These bonus questions are only optional for those who have extra bandwidth in this course.

Here is the first challenge problem. It is actually a math contest problem. Writing a program, it is efficient to illustrate change of the card deck after each round of shuffling. It helps to understand the math solution to this problem.

We take a pack of 2020 cards numbered from 1 (on the top of the pack) until 2020 (on the bottom of the pack). We pass the top card of the deck to the bottom of the deck, then we throw the next one on the table saying that it is eliminated. Then we start again. The new top card goes under the deck, then the next one is discarded like the first discarded card. Continue in this way until there is only one card left in your hand, all the others being eliminated from the table. What is the number of the remaining card?

Write a program to show after each round of shuffling the deck, the actual sequence of the cards in the deck. The display should have every 100 card in each line. The program should show the results of all rounds till the deck has only one card left.

Your submission should include the source code, and screen shots of the running results. Write your answer to this math problem in the code comments of your source code.

Lecture notes:

-   `[ 1 2 3 4 5 6 ... 2020 ]`

-   Shuffle 1: `[ 3 4 5 ... 2020 1 ]` # of cards: 2019
-   Shuffle 2: `[ 5 6 7 ... 2020 1 3 ]` # of cards: 2018
-   Shuffle 3: `[ 7 8 9 ... 2020 1 3 5 ]` # of cards: 2018

Dynamic arrays with pointers

-   Start from the top and throwaway the next
-   `[1] [] [] [] ... [2020]`
-   Flag array to store the T F bools
-   Using a modulo % to move the indicator to the beginning of the deck array
-   STL: standard template library ???
