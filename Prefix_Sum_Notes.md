# Prefix Sum — Notes and C++ Example

## Idea

A prefix-sum array stores cumulative sums so that the sum of a range can be answered without looping through that range every time.

For an array `a` of size `n`, define:

`prefix[0] = 0`

`prefix[i + 1] = prefix[i] + a[i]`

Then the sum of the inclusive range `[l, r]` is:

`rangeSum(l, r) = prefix[r + 1] - prefix[l]`

The leading zero makes the formula work cleanly when `l = 0`.

## Worked example

Array: `[2, 4, 1, 7, 3]`

Prefix array: `[0, 2, 6, 7, 14, 17]`

Sum from index `1` to index `3`:

`prefix[4] - prefix[1] = 14 - 2 = 12`

This matches `4 + 1 + 7 = 12`.

## C++ implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {2, 4, 1, 7, 3};
    int n = static_cast<int>(a.size());

    vector<long long> prefix(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    // Inclusive range [l, r]
    int l = 1, r = 3;
    long long sum = prefix[r + 1] - prefix[l];

    cout << sum << '\\n'; // 12
    return 0;
}
```

## Complexity

- Build the prefix array: **O(n)** time.
- Answer each range-sum query: **O(1)** time.
- Extra space: **O(n)**.

## Common mistakes

- Forgetting the extra element: the prefix array has size `n + 1`.
- Using `prefix[r] - prefix[l]` for an inclusive range; use `prefix[r + 1] - prefix[l]`.
- Mixing zero-based and one-based indices.
- Using a narrow integer type when values or sums may be large; `long long` is a safer default for many competitive-programming problems.

## When to use it

Prefix sums are useful for repeated static range-sum queries, counting cumulative values, and subarray-sum problems. If array values change frequently, a Fenwick tree or segment tree may be a better fit.
