-- -- Write your query below
-- select student_id,exam_id,score 
-- from exam_results 
-- group by student_id
WITH temp as(
    SELECT *,
        ROW_NUMBER() OVER(
            PARTITION BY student_id
            ORDER BY score desc,
            exam_id asc
        ) AS rn 
        from exam_results
)
select student_id,exam_id,score 
from temp
where rn=1
order by student_id;