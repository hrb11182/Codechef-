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
