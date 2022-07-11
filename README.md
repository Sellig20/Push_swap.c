## -- PUSH_SWAP --

`125 %`

# Explanation of the algorithm
I choose to calculate the minimum, maximum and the median. I push everything else in stack B, and sort by 3 the three left in stack A.
Then, I have 4 methods to re push everything from stack B to stack A :
        `rr + rb/ra`
        `rrr + rb/ra`
        `ra + rrb`
        `rb + rra`
This is an n rotation algorithm which is going to calculate the best way (= the less nstructions per intgers) to have an all sorted stack A.
