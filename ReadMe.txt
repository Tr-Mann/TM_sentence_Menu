This program is a simple menu based project, which asks the user to input a string, then can tell them the middle character if there is one, it can convert their sentence's lowercase letters to their capital counterpart, convert capital letters to lowercase counterpart, or display their sentence backwards.

One issue I had was getting the selections to work, so rather than have the program check for if their input is outside of a range of 1-4 like I originally wanted to, I have it check for each input they could do. I did this because I was having trouble figuring out how to make an exception to the range rule since -999 is very far outside of that range, so I cannot just increase the range by 1 to add the option in.

I used for loops to iterrate through the sentences when converting to capital or lowercase, it makes my code cleaner since I do not need to include my counter inside of the code block, and makes it easier to be sure that i == 0.

To convert the letters between capital and lowercase, I found out that their ascii values are offset by 32 so I could add or subtract depending on which way you are converting.