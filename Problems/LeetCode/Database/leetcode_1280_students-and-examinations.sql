/**
 * Platform: LeetCode
 * Problem: 1280. Students and Examinations
 * Link: https://leetcode.com/problems/students-and-examinations/
 * Difficulty: Easy
 * Solved: 09-09-2025
 *
 * Approach:
 * - Use CROSS JOIN between Students and Subjects → ensures all (student, subject) combinations.
 * - LEFT JOIN with Examinations to count actual exam attempts.
 * - COUNT(e.subject_name) handles 0 cases (if exam not attended).
 * - GROUP BY student_id, student_name, subject_name to aggregate counts.
 *
 * Complexity Analysis:
 * - Time: O(N × M)   [students × subjects, plus join with Examinations]
 * - Space: O(1)      [result set only]
 */

SELECT 
    s.student_id,
    s.student_name,
    sub.subject_name,
    COUNT(e.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub  -- to get all possible (student, subject) combos
LEFT JOIN Examinations e  -- to find attended exams
    ON s.student_id = e.student_id 
   AND sub.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sub.subject_name
ORDER BY s.student_id, sub.subject_name;