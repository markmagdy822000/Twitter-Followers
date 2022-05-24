# Twitter-Followers

## Advanced Algorithm’s Project
Twitter Followers Project
In this project, we are given a comma separated file to represent some twitter users and
the users they follow. Each row represents a certain user’s id
and the id of another user he/she follows.
e.g.
`
1,2 //user with id = 1 follows the user with id = 2
2,5 //user with id = 2 follows the user with id = 5
3,5 //user with id = 3 follows the user with id = 5
1,6 //user with id = 1 follows the user with id = 6
`
You are required to make a program that stores this data in a suitable data structure that
helps your program to retrieve the `Top-influencer` that has the highest number of followers,
when required, and then the next Top-influencer and so on.
Also, you have to support a `complexity analysis`.
As a bonus question, you may take a twitter account id from the user and calculate its
closest group of twitter users to recommend as a new friend. Closest means they have at
least a threshold number of twitter accounts in common. One of your responsibilities in this
bonus task is to determine this threshold.
