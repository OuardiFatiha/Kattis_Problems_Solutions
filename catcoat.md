## Cat Coat Colors
### Problem
The color of a cat is primarily decided by three genes, coding for Black (Eumelanin), Red (Phaeomelanin) and Dilution (Melanophilin).
The cat genetics experts among the readers will note that we are ignoring a wide range of genes, e.g.,
Tyrosinase and the white masking gene – we apologize in advance for the oversimplifications that are to ensue. <br> <br>
Black is usually written as B, Red as O, Dilution as D. In general, a cat has two copies of each gene, one from each parent
(except for the red gene which is sex-bound, we’ll return to that later). Each copy can be either dominant, which we’ll denote using an upper case letter,
or recessive, which we’ll denote using a lower case letter. Thus for each gene there are three possibilities: either both copies of the gene are dominant, 
both are recessive, or one is dominant and the other is recessive. When describing a cat we’ll write this as a pair of letters, with the second one
possibly being a “-” to indicate a wildcard. For example, “bb” indicates that the cat has two recessive black genes, and “B-” indicates that the cat
has a dominant black gene and that we don’t care about whether the other one is dominant or recessive.  <br> <br>
When a cat has no dominant red (O) gene, its coat will be a variation of black, according to the following four combinations:

B-D-: Black

B-dd: Blue

bbD-: Chocolate

bbdd: Lilac

Now, red (O or o) is sex bound on the X chromosone. This means a male cat, or tom, only has a single red gene, while a female has two.
Red dominates black, meaning that a cat having an O gene will always have red coloring. Like black, red is also affected by the dilution gene.
For male cats, we have the following two possible red colors (here, the black genes have no effect on the coat color):

D-O: Red

ddO: Cream

For female cats the situation gets a bit more complicated. If the female has two O genes she will be be red, with variations depending 
on the dilution gene in exactly the same way as for male red cats:

D-OO: Red

ddOO: Cream

However, a female cat with the Oo combination will have a partially black, partially red, coat. These cats are known as Torties (Tortoiseshells), 
and named after both their coat colours, starting with the black. The four possible Tortie colorings are thus as follows:

B-D-Oo: Black-Red Tortie

B-ddOo: Blue-Cream Tortie

bbD-Oo: Chocolate-Red Tortie

bbddOo: Lilac-Cream Tortie

When a pair of cats have kittens, the offspring will get a random set of genes from their parents according to the following simple process: for each gene,
independently, one of the copies is selected uniformly at random from the father’s two copies, and the other copy is selected uniformly at random from the mother’s
two copies. For the red gene, there is a 50% chance that the offspring will be female in which case it will get the father’s red gene (and one of the mother’s red 
genes at random), and a 50% chance that the offspring will be male in which case it will only get one of the mother’s red genes (at random). <br> <br>
Write a program which, given the colors of two cats, computes the most likely color for their offspring. For cats having a color where some genes do not affect the color,
assume that the corresponding genes are uniformly random (over the two choices dominant/recessive). For example, if a cat is red, you should assume that the possibilities
“DD” and “Dd” for the dilution gene are equally likely, and that the four possibilities “BB”, “Bb”, “bB” and “bb” are equally likely for the black gene 
(but note that “Bb” and “bB” are equivalent).
[Source](https://open.kattis.com/problems/catcoat)
### Some Insight
### Implementation In C++