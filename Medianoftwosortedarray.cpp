class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> arr(nums1.size() + nums2.size());
    int a = 0, b = 0;
    for (int i = 0; i < nums1.size() + nums2.size(); i++) {
      if (a != nums1.size() && b != nums2.size()) {
        if (nums1[a] < nums2[b]) {
          arr[i] = nums1[a];
          a++;
        } else {
          arr[i] = nums2[b];
          b++;
        }
      } else if (a == nums1.size()) {
        arr[i] = nums2[b];
        b++;
      } else {
        arr[i] = nums1[a];
        a++;
      }
    }
    if (arr.size() % 2 == 0) {
      return (float)(arr[arr.size() / 2] + arr[(arr.size() / 2) - 1]) / 2;
    } else {
      return arr[arr.size() / 2];
    }
    return 0;
  }
};