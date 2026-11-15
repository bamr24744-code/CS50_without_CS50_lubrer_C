Relational Databases

  AVG
  COUNT
  DISTINCT
  LOWER
  MAX
  MIN
  UPPER
//============================
 WHERE       -- adding a Boolean expression to filter our data
  LIKE        -- filtering responses more loosely
  ORDER BY    -- ordering responses
  LIMIT       -- limiting the number of responses
  GROUP BY    -- grouping responses together

//==============================
  BLOB       -- binary large objects that are groups of ones and zeros
  INTEGER    -- an integer
  NUMERIC    -- for numbers that are formatted specially like dates
  REAL       -- like a float
  TEXT       -- for strings and the like
  //===========================
    NOT NULL
  UNIQUE
  //===================
    
    sqlite3 shows.db 

  //=================
  SELECT title
FROM shows
WHERE id IN (
    SELECT show_id
    FROM ratings
    WHERE rating >= 6.0
    LIMIT 10
);
//=====================
SELECT * FROM shows
  JOIN ratings ON shows.id = ratings.show_id
  WHERE rating >= 6.0
  LIMIT 10;

//======================
SELECT * FROM genres
LIMIT 10;
//================
SELECT title FROM shows
WHERE id IN (
  SELECT show_id FROM genres
  WHERE genre = 'Comedy'
  LIMIT 10
);
//======================

SELECT * FROM shows
JOIN genres
ON shows.id = genres.show_id
WHERE id = 63881;
//==================
SELECT name FROM people WHERE id IN 
    (SELECT person_id FROM stars WHERE show_id = 
        (SELECT id FROM shows WHERE title = 'The Office' AND year = 2005));

//====================
SELECT title FROM shows
JOIN stars ON shows.id = stars.show_id
JOIN people ON stars.person_id = people.id
WHERE name = 'Steve Carell';
//=============================
SELECT title FROM shows, stars, people 
WHERE shows.id = stars.show_id
AND people.id = stars.person_id
AND name = 'Steve Carell';
//'=============================
CREATE INDEX name_index ON people (name);
CREATE INDEX person_index ON stars (person_id);
//======================
SELECT title FROM shows WHERE id IN 
    (SELECT show_id FROM stars WHERE person_id = 
        (SELECT id FROM people WHERE name = 'Steve Carell'));
//===============================

 from cs50 import SQL

// ================