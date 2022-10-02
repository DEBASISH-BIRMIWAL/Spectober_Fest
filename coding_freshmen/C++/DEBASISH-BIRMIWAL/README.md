# <ROMAN_TO_DECIMAL>
      Given a roman numeral, convert it to an integer.

      Input: s = "III"
      Output: 3
      Explanation: III = 3


      Constraints:

      1 <= s.length <= 10
      s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
      It is guaranteed that s is a valid roman numeral in the range [1, 3999].
# Problem Explanation 🚀
      Here you have to recognise which string has what value and add up them,
# Your logic 🤯
       Approach:
       my logic takes each character from the string and checks for its value and goes on adding them to the answer.
       main problem was to check for iv,ix...
       form which a nested for is used.
# Time Complexity and Space Complexity
       // Time Complexity -> O(n)
       // Space Complexity -> O(1)
