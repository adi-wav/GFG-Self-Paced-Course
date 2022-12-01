//Method 1 => T.C: O(m+n) and A.S.: o(n)
/* 1. create an empty hash set hs
   2. traverse the first list and put all of its nodes into the hs.
   3. traverse the second list and look for every node in hs. as soon as we find a node print in hs we return value of hs.*/

//Method 2 => T.C.: O(m) and A.S.: O(1)
/* 1. count nodes in both the lists. let counts be c1 and c2.
   2. traverse the bigger list abs(c1-c2) times
   3. traverse both the lists simultaneously until we see a common node*/