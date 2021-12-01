# Codechef-

## Que-1 :

![image](https://user-images.githubusercontent.com/59706923/144262669-fc3d2691-183d-4eed-9ebe-efa3a9675bf8.png)
![image](https://user-images.githubusercontent.com/59706923/144262778-b2e57995-0cae-4f40-8e01-9faed817f623.png)

#### Question explanation -

* Here 1st line of input is T.
* Second will contain 3 values n(total number of characteristics both Russ and Ross have) x is the min number of characterstics smaller then k the max range in which the difference of each characteristics should lie to be valid.

### Solution approach -
* Take two arrays of size n( representing Ross and Russ array respectively)
* Take a loop and traverse both the array if abs(a[i] - b[i]) <= k count++.
* If count >=x Yes if not NO.


# Que-2 :

![image](https://user-images.githubusercontent.com/59706923/144264095-0e27276c-334f-457e-8206-783c45b30c94.png)
![image](https://user-images.githubusercontent.com/59706923/144264159-618f20bb-a9fa-46a7-a6bb-0902aa101912.png)

### Key Observations-

1- All six friends should get cookies and in different numbers.
 - We can divide it like :
 * 1st friend will get 1.
 * 2nd will get 2.
 * 3rd will get 3.
 * 4th will get 4.
 * 5th will get 5.
 * 6th will get all the remaining cookies untill remaining cookies
 are 1,2,3,4,5 in number because it will duplicate the same number of candies.
 
2 - If cookies are less then (1 + 2 + 3 + 4 + 5 + 6) = 21 we can't divide.
