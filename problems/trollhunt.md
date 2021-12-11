### Problem
Once upon a time in a land of yore, there was a troll who lived ’neath one of the land’s many stone bridges. This troll was quite a mischievous troll, for you see, it had a habit of accusing anyone crossing the bridge of having stolen the troll’s property (which was a somewhat curious accusation given that the troll had no property), the punishment of which was to be eaten alive. Unfortunately for the troll, eventually the king got wind of its questionable business model, and sent out the valiant knights of the High Tavern to go, shall we say, Queen of Hearts, on the troll.

Apprehensive of its imminent decapitation, the troll fled, and did not have the decency to even leave a forwarding address. Being a troll, it was clear that the troll was hiding under some other stone bridge than the one it had used for its shady business practice, but which? The knights decided to split up in groups and go search. Since a group needed to be able to avoid being eaten once the troll was found, each group had to consist of at least a certain number of knights. Each group of knights could search under one stone bridge per day (and travelling between bridges was done at lightning speed, thanks to the knights’ renowned iTravel™ technology). While clever enough to flee from its hunting ground, the troll is not bright enough to keep moving between different bridges: once the hunt starts, the troll stays in the same place. How many days would it take until the troll would surely have been found?

[Source](https://open.kattis.com/problems/trollhunt)

### Some Insight
Let b k and g be the number of bridges, knights and  knights needed in each group respectively.
- Objective : Finding a formula to calculate the number of days until the troll is sure to be found wihch is also the number of days that should take the groups to visit every bridge.
- Note that **bold the bridge the troll was hiding under some other stone bridge than the one it had used for its shady business practice**
so the groups should only search in the other b-1 lefting bridges.
- Let's take an example `5 2 1` we have two knights and 2 bridges with 1 knight per group which make 2 groups.
Question: How many days would take the 2 groups to  visit all the 4 (5-1) bridges ?
You guessed it it's 2 days!

- Another example `10 5 2` with the same calculas we can see that we have too groups here as well (5/2) one with 2 knights and the other with 3 ones.
Question: How long would it take the 2 groups to go through the 9 (10-1) bridges. Think a little bit ...
Answer: In 4 days the 2 groups would have visited 8 bridges (2*4) but still one bridge is left.. => 5 days.

### Implementation In C++
```
#include <iostream>

using namespace std;

int main(){
  int b,k,g;
  cin>>b>>k>>g;
  b--;
  if(b % (k/g) == 0 ) cout<<b/(k/g);
  else cout<<b/(k/g)+1;
   return 0;
}
```
