# Twitter-Followers

Twitter Followers Project In this project, we are given a comma separated file to represent some twitter users and the users they follow. Each row represents a certain user’s id and the id of another user he/she follows.

```
1,2 //user with id = 1 follows the user with id = 2

2,5 //user with id = 2 follows the user with id = 5

3,5 //user with id = 3 follows the user with id = 5

1,6 //user with id = 1 follows the user with id = 6
```

- We make a program that stores this data from `csv file` in a `2d-vector ` that helps the program to retrieve the `Top-influencer` that has the highest number of followers, when required, and then the next Top-influencer and so on.

- We take a twitter account id from the user and calculate its closest group of twitter users to recommend as a new friend. Closest means they have at least a threshold number of twitter accounts in common.

![](Screenshot%20from%202022-05-24%2019-28-24.png)

### First point

Here is the top influencer that has the highest number of followers
Infront of them the number of followers they have.

We inserted Id's in second column in a `binary search tree` to find if that id is already exist then increment it's number of followers
else create a insert it.

Then we push these Ids into a `multimap` where the number of followers is the key (to sort `descendingly` according to number of `keys`)
and value is the id
then print from the multimap

![](Screenshot%20from%202022-05-24%2019-28-21.png)

### Second point

We have a vector called `IM` holds the pages that the given Id follow
thes pages are imporatnt in the next step
as if other users follow a number of pages from `IM` vector it means that those users follow common pages with the given Id.

The `IM` vector and the `content2` vectors are sorted.

So, when we search by j-th id in `IM` in i-th id in `content2` vector if we find the element we take the user (from column one) and put it inside vector called `my_vector` and if it already exist we increment the same index in array `score` by one.

if we didn't find the element in second column in content vector then we increment j++ as we won't find it anymore.

Sorting `content2` vector according to the second column and sorting `IM` make us loop on content vector only one time.

If the score of the user is equal to or greater than threshold we print that user as suggested friend to the given id.

---

### Time Complexity

We took O(E\*log(E)) in the first point as insert element into tree and
O(Nlog(N)) to insert ids into multimap.

In the second point the complexity is O(N\*M) were

- `N` is the number of different ids
  (N is around 81,000)

- `E` is the number of relations between the ids (E is about 1,700,000 relation)
- `M`  is the number of ids in my_vector
