
Relational Databases

  AVG
  COUNT
  DISTINCT
  LOWER
  MAX
  MIN
  UPPER
# ============================
 WHERE       -- adding a Boolean expression to filter our data
  LIKE        -- filtering responses more loosely
  ORDER BY    -- ordering responses
  LIMIT       -- limiting the number of responses
  GROUP BY    -- grouping responses together

# ==============================
  BLOB       -- binary large objects that are groups of ones and zeros
  INTEGER    -- an integer
  NUMERIC    -- for numbers that are formatted specially like dates
  REAL       -- like a float
  TEXT       -- for strings and the like
# ==========================
    NOT NULL
  UNIQUE
#==================
    
    sqlite3 shows.db 
# ==========================
1. عرض كل البيانات (10 سجلات)
SELECT * FROM favorites LIMIT 10;

# =======================

1. عرض كل البيانات (10 سجلات)
sql

SELECT * FROM favorites LIMIT 10;
#========================

2. عرض اللغات الفريدة (بدلاً من العناوين)
sql
SELECT DISTINCT language FROM favorites;
#========================

3. ترتيب اللغات أبجدياً
sql
SELECT language FROM favorites ORDER BY language;
#========================

4. أكثر اللغات شعبية (الأمر الأهم في المحاضرة)
sql
SELECT language, COUNT(*) AS count 
FROM favorites 
GROUP BY language 
ORDER BY count DESC 
LIMIT 10;
#========================

5. أكثر المشاكل (problems) شعبية
sql
SELECT problem, COUNT(*) AS count 
FROM favorites 
GROUP BY problem 
ORDER BY count DESC 
LIMIT 10;
#========================

6. البحث عن لغة محددة (مثل Python)
sql
SELECT * FROM favorites WHERE language = 'Python';
#========================

7. عدّ عدد مستخدمي Python
sql
SELECT COUNT(*) FROM favorites WHERE language = 'Python';
#========================

8. البحث عن مشكلة معينة
sql
SELECT * FROM favorites WHERE problem LIKE '%Scratch%';
#========================

9. أكثر 10 مشاكل شعبية بلغة Python فقط
sql
SELECT problem, COUNT(*) AS count 
FROM favorites 
WHERE language = 'Python'
GROUP BY problem 
ORDER BY count DESC 
LIMIT 10;

#========================

📊 ملخص الأوامر حسب أعمدتك الفعلية
الهدف
الأمر
عرض اللغات الفريدة
SELECT DISTINCT language FROM favorites;
أكثر اللغات شعبية
SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY count DESC;
أكثر المشاكل شعبية
SELECT problem, COUNT(*) FROM favorites GROUP BY problem ORDER BY count DESC;
تصفية بلغة معينة
SELECT * FROM favorites WHERE language = 'Python';
بحث جزئي في المشاكل
SELECT * FROM favorites WHERE problem LIKE '%Scratch%';

#========================

💡 ملاحظة مهمة عن محاضرة CS50
ديفيد مالان في المحاضرة السابعة يستخدم جدولاً من Google Form قديم (2018) يحتوي على أعمدة إضافية مثل title و genres. جدولك الحالي أبسط (يحتوي فقط على language و problem)، لكن نفس المفاهيم تنطبق:
SELECT → استخراج البيانات
DISTINCT → القيم الفريدة
GROUP BY + COUNT(*) → الإحصائيات
ORDER BY ... DESC → الترتيب التنازلي
WHERE → التصفية
LIKE → البحث الجزئي

#========================

جرب الأمر التالي الآن وأخبرني بالنتيجة:
sql
SELECT language, COUNT(*) AS count 
FROM favorites 
GROUP BY language 
ORDER BY count DESC 
LIMIT 10;
هذا سيعرض لك أكثر 10 لغات برمجة شعبية في جدولك، وهو نفس المفهوم الذي يشرحه ديفيد في المحاضرة (لكن على عمود language بدلاً من title). 🚀

#========================

📝 المرحلة التالية: تعديل البيانات
1. البحث الجزئي باستخدام LIKE
ديفيد يشرح كيف نبحث عن أنماط معينة. جرب هذا:
sql
SELECT * FROM favorites WHERE problem LIKE '%Hello%';

#========================

الشرح:
% تعني "أي عدد من الأحرف"
%Hello% تعني "ابحث عن أي مشكلة تحتوي كلمة Hello في أي مكان"

#========================

2. البحث عن مشاكل Scratch فقط
sql
SELECT problem, COUNT(*) AS count 
FROM favorites 
WHERE language = 'Scratch'
GROUP BY problem 
ORDER BY count DESC;

#========================

3. إدخال سجل جديد (INSERT)
ديفيد يوضح كيف نضيف بيانات جديدة:
sql
INSERT INTO favorites (Timestamp, language, problem) 
VALUES ('11/16/2026 10:00:00', 'JavaScript', 'Hello World');
للتأكد من الإضافة:
sql
SELECT * FROM favorites WHERE language = 'JavaScript';

#========================

4. تحديث سجل موجود (UPDATE)
⚠️ مهم: UPDATE بدون WHERE سيحدث كل السجلات!
sql
UPDATE favorites 
SET language = 'Python' 
WHERE language = 'python';
الشرح: هذا يصحح الأخطاء الإملائية (مثل python الصغيرة إلى Python الكبيرة).

#========================

5. حذف سجل (DELETE)
⚠️ تحذير: DELETE بدون WHERE يحذف كل الجدول!
لحذف السجل الذي أضفناه للتو:
sql
DELETE FROM favorites 
WHERE language = 'JavaScript';
للتأكد من الحذف:
sql
SELECT * FROM favorites WHERE language = 'JavaScript';
(يجب أن ترجع 0 نتائج)

#========================

6. تعديل هيكل الجدول (ALTER TABLE)
ديفيد يشرح كيف نضيف عموداً جديداً:
sql
ALTER TABLE favorites ADD COLUMN difficulty TEXT;

للتأكد من إضافة العمود:
sql
.schema
ستجد الآن الجدول يحتوي على 4 أعمدة بدلاً من 3.

#========================

7. تحديث العمود الجديد
sql
UPDATE favorites 
SET difficulty = 'Easy' 
WHERE problem = 'Hello, World';

UPDATE favorites 
SET difficulty = 'Medium' 
WHERE problem = 'Filter';

UPDATE favorites 
SET difficulty = 'Hard' 
WHERE problem = 'Plurality';
#========================


8. عرض البيانات مع العمود الجديد
sql
SELECT Timestamp, language, problem, difficulty 
FROM favorites 
WHERE difficulty IS NOT NULL
LIMIT 10;

#========================

🎯 تمرين تطبيقي (كما يفعل ديفيد في المحاضرة)
المطلوب: اعرض أكثر 5 مشاكل صعوبة (Hard) شعبية:
sql
SELECT problem, COUNT(*) AS count 
FROM favorites 
WHERE difficulty = 'Hard'
GROUP BY problem 
ORDER BY count DESC 
LIMIT 5;

#========================

📊 ملخص أوامر التعديل
الأمر
الاستخدام
تحذير
INSERT INTO
إضافة سجل جديد
-
UPDATE ... SET
تعديل سجل موجود
استخدم WHERE دائماً
DELETE FROM
حذف سجل
استخدم WHERE دائماً
ALTER TABLE ADD
إضافة عمود جديد
-
LIKE '%نمط%'
بحث جزئي
-

#========================

💡 نصيحة ديفيد مالان المهمة
"دائماً استخدم WHERE مع UPDATE و DELETE، إلا إذا كنت متعمداً تعديل/حذف كل الجدول."
جرب هذه الأوامر بالترتيب وأخبرني بالنتائج. بعد ذلك سننتقل إلى المرحلة الأخيرة من المحاضرة وهي JOIN (الربط بين جداول متعددة) إذا أردت. 🚀


ممتاز! 🎉 النتائج مثالية. الآن ننتقل إلى الجزء الأهم في المحاضرة السابعة: JOIN (الربط بين الجداول).
🔗 المرحلة التالية: JOIN - الربط بين الجداول
ديفيد مالان يشرح أن قوة SQL الحقيقية تظهر عند ربط جداول متعددة. سنقوم بإنشاء جدول ثانٍ وربطه مع favorites.

#========================

الخطوة 1: إنشاء جدول جديد (shows)
sql
CREATE TABLE shows (
    id INTEGER PRIMARY KEY,
    title TEXT NOT NULL,
    year INTEGER,
    genre TEXT
);

#========================

الخطوة 2: إدخال بيانات تجريبية
sql
INSERT INTO shows (id, title, year, genre) VALUES 
(1, 'Breaking Bad', 2008, 'Drama'),
(2, 'Game of Thrones', 2011, 'Fantasy'),
(3, 'The Office', 2005, 'Comedy'),
(4, 'Stranger Things', 2016, 'Sci-Fi'),
(5, 'Friends', 1994, 'Comedy');

#========================

الخطوة 3: التحقق من الجدول الجديد
sql
SELECT * FROM shows;

#========================

🔀 أنواع JOIN المختلفة
1. INNER JOIN (الربط الداخلي)
المفهوم: يعرض فقط السجلات المتطابقة في كلا الجدولين.
sql
SELECT favorites.language, shows.title, shows.genre
FROM favorites
INNER JOIN shows ON favorites.problem = shows.title;
ملاحظة: بما أن أسماء المشاكل في جدولك (Filter, Hello World...) لا تطابق عناوين المسلسلات، ستحصل على 0 نتائج. هذا طبيعي!
#========================


2. LEFT JOIN (الربط الأيسر)
المفهوم: يعرض كل سجلات الجدول الأيسر، حتى لو لم يوجد تطابق في الجدول الأيمن.
sql
SELECT favorites.language, favorites.problem, shows.title
FROM favorites
LEFT JOIN shows ON favorites.problem = shows.title
LIMIT 10;
النتيجة المتوقعة: سترى كل المشاكل من جدول favorites، لكن عمود title من جدول shows سيكون فارغاً (NULL) لأن لا يوجد تطابق.
#========================


3. CROSS JOIN (الربط التبادلي)
المفهوم: يربط كل سجل من الجدول الأول مع كل سجل من الجدول الثاني (منتج ديكارتي).
sql
SELECT favorites.language, shows.title
FROM favorites
CROSS JOIN shows
LIMIT 10;
تحذير: هذا ينتج عدداً ضخماً من الصفوف (190 × 5 = 950 صف)! لذلك استخدمنا LIMIT 10.

#========================

🎯 مثال عملي واقعي (كما يشرح ديفيد)
لنفترض أن لدينا جدولاً ثالثاً يربط المستخدمين بالمسلسلات:
sql
CREATE TABLE user_shows (
    user_id INTEGER,
    show_id INTEGER,
    rating INTEGER
);

INSERT INTO user_shows (user_id, show_id, rating) VALUES 
(1, 1, 9),
(1, 3, 8),
(2, 2, 10),
(2, 4, 7);

#========================

الآن نربط الجداول الثلاثة:
sql
SELECT shows.title, user_shows.rating
FROM shows
INNER JOIN user_shows ON shows.id = user_shows.show_id
WHERE user_shows.user_id = 1;
النتيجة: ستعرض المسلسلات التي قيمها المستخدم رقم 1 مع تقييماته.

#========================

📊 ملخص أنواع JOIN
النوع
الوصف
الاستخدام
INNER JOIN
فقط السجلات المتطابقة
عندما تريد بيانات موجودة في كلا الجدولين
LEFT JOIN
كل سجلات الجدول الأيسر
عندما تريد كل البيانات من جدول رئيسي
RIGHT JOIN
كل سجلات الجدول الأيمن
نادر الاستخدام
CROSS JOIN
كل التركيبات الممكنة
للتحليلات المعقدة

#========================

💡 نصيحة ديفيد مالان
"استخدم INNER JOIN عندما تريد تقاطع البيانات، و LEFT JOIN عندما تريد الاحتفاظ بكل بيانات الجدول الرئيسي."

#========================

🎓 تمرين تطبيقي
المطلوب: اعرض جميع اللغات من جدول favorites مع عدد المشاكل المرتبطة بكل لغة، ولكن فقط للغات التي لها أكثر من 50 مشكلة:
sql
SELECT language, COUNT(*) AS problem_count
FROM favorites
GROUP BY language
HAVING problem_count > 50
ORDER BY problem_count DESC;

#========================

ملاحظة: HAVING تستخدم لتصفية نتائج GROUP BY (مثل WHERE لكن للمجموعات).
جرب أوامر JOIN وأخبرني بالنتائج. هل تريد أن ننتقل إلى المرحلة الأخيرة وهي الاستعلامات الفرعية (Subqueries) و الـ Views؟ 🚀
╭──────────┬───────────────╮
│ language │ problem_count │
╞══════════╪═══════════════╡
│ Python   │           190 │
│ C        │            58 │
╰──────────┴───────────────╯
SQLite-3.54 favorites.db-> 

#========================
ممتاز! 🎯 النتيجة مثالية وتوضح مفهوم HAVING بدقة:
Python: 190 مشكلة ✅ (أكبر من 50)
C: 58 مشكلة ✅ (أكبر من 50)
Scratch: 24 مشكلة ❌ (تم استبعاده لأنه أقل من 50)

#========================

الآن ننتقل إلى المرحلة الأخيرة من المحاضرة السابعة: المفاهيم المتقدمة.
🚀 المرحلة 4: الاستعلامات الفرعية (Subqueries)
ديفيد يشرح كيف نضع استعلاماً داخل استعلام آخر.

#========================

مثال: عرض المشاكل التي تستخدمها اللغات الأكثر شعبية
sql
SELECT problem 
FROM favorites 
WHERE language IN (
    SELECT language 
    FROM favorites 
    GROUP BY language 
    HAVING COUNT(*) > 50
);
الشرح:
الاستعلام الداخلي يجد اللغات التي لها أكثر من 50 مشكلة (Python و C)
الاستعلام الخارجي يعرض كل المشاكل المرتبطة بهذه اللغات

#========================

مثال آخر: إيجاد المشاكل المشتركة بين Python و C
sql
SELECT DISTINCT problem 
FROM favorites 
WHERE language = 'Python' 
AND problem IN (
    SELECT problem 
    FROM favorites 
    WHERE language = 'C'
);

#========================

👁️ المرحلة 5: Views (الطرق العرضية)

المفهوم: View هو استعلام محفوظ باسم، يمكنك استخدامه كجدول افتراضي.


إنشاء View للغات الشائعة
sql
CREATE VIEW popular_languages AS
SELECT language, COUNT(*) AS count
FROM favorites
GROUP BY language
ORDER BY count DESC;

#========================

استخدام الـ View
sql
SELECT * FROM popular_languages;


النتيجة:
language  count
--------  -----
Python    190
C         58
Scratch   24
فائدة Views:
تبسيط الاستعلامات المعقدة
إعادة استخدام الاستعلامات المتكررة
إخفاء تعقيد الجداول

#========================

⚡ المرحلة 6: Indexes (الفهارس)
المفهوم: الفهرس يسرع عمليات البحث، خاصة في الجداول الكبيرة.

#========================

إنشاء فهرس على عمود language
sql
CREATE INDEX idx_language ON favorites(language);

#========================

إنشاء فهرس على عمود problem
sql
CREATE INDEX idx_problem ON favorites(problem);

#========================

التحقق من الفهارس
sql
.schema favorites

#========================

ستجد الآن أن الجدول يحتوي على فهارس إضافية.
متى نستخدم الفهارس؟
✅ عندما تبحث كثيراً عن بيانات معينة (WHERE)
✅ عندما ترتب البيانات كثيراً (ORDER BY)
❌ لا تستخدمها في الجداول الصغيرة جداً
❌ لا تفرط في استخدامها (تبطئ INSERT و UPDATE)

#========================

🔒 المرحلة 7: Transactions (المعاملات)
المفهوم: Transaction هي مجموعة من الأوامر التي تُنفذ كوحدة واحدة - إما كلها تنجح أو كلها تفشل.
مثال: نقل بيانات بين جدولين
#========================

sql
BEGIN TRANSACTION;

INSERT INTO favorites (Timestamp, language, problem, difficulty)
VALUES ('11/16/2026 12:00:00', 'JavaScript', 'React Basics', 'Medium');

UPDATE favorites 
SET difficulty = 'Advanced' 
WHERE problem = 'Plurality' AND language = 'Python';

COMMIT;

#========================

الشرح:
BEGIN TRANSACTION → بدء المعاملة
الأوامر中间的 → تنفيذ العمليات
COMMIT → تأكيد وحفظ التغييرات

#========================

إذا أردت التراجع:
sql
BEGIN TRANSACTION;

DELETE FROM favorites WHERE language = 'JavaScript';

ROLLBACK;  -- التراجع عن الحذف

#========================

📊 ملخص المحاضرة السابعة كاملة
المفهوم
الأمر
الاستخدام
SELECT
SELECT * FROM table
استخراج البيانات
WHERE
WHERE column = value
تصفية النتائج
LIKE
LIKE '%pattern%'
بحث جزئي
ORDER BY
ORDER BY col DESC
ترتيب النتائج
GROUP BY
GROUP BY column
تجميع البيانات
HAVING
HAVING COUNT(*) > 50
تصفية المجموعات
JOIN
INNER JOIN ... ON
ربط الجداول
Subquery
WHERE x IN (SELECT...)
استعلام داخل استعلام
View
CREATE VIEW name AS
حفظ استعلام كجدول افتراضي
Index
CREATE INDEX idx ON table(col)
تسريع البحث
Transaction
BEGIN...COMMIT/ROLLBACK
معالجة آمنة للبيانات
#========================


🎓 تمرين ختامي شامل
المطلوب: اعرض أكثر 3 مشاكل صعوبة (Hard) شعبية، مع عدد مرات تكرارها، ولكن فقط إذا كانت مرتبطة بلغة Python:
sql
SELECT problem, COUNT(*) AS count
FROM favorites
WHERE language = 'Python' AND difficulty = 'Hard'
GROUP BY problem
ORDER BY count DESC
LIMIT 3;

#========================


💡 نصيحة ديفيد مالان الختامية
"SQL هي لغة declarative - أنت تخبر الكمبيوتر ماذا تريد، وليس كيف يحصل عليه. هذا ما يجعلها قوية جداً."
هل تريد أن ننتقل إلى تطبيق عملي باستخدام Node.js و SQLite؟ أم تفضل مراجعة أي مفهوم من المحاضرة؟ 🚀
شكرا تم تجربة استعلامات shows ، PS E:\tasks> python favorites.py
Favorite: Hello, World
#========================


🎉 ممتاز! لقد أكملت محاضرة CS50 Week 7 بنجاح!
📊 تحليل ما أنجزته
✅ 1. تطبيق Python + SQLite
Favorite: Hello, World

#========================

هذا يعني أن ملف favorites.py يعمل بشكل صحيح ويربط Python بقاعدة SQLite - وهو الهدف الأساسي من الجزء التطبيقي في المحاضرة.
✅ 2. استعلام Subquery المتداخل (Nested Subquery)
الاستعلام الذي نفذته:
sql
SELECT title FROM shows 
WHERE id IN (
    SELECT show_id FROM stars 
    WHERE person_id = (
        SELECT id FROM people 
        WHERE name = 'Steve Carell'
    )
);
هذا هو نفس الاستعلام الذي ينفذه ديفيد مالان في المحاضرة! وهو يوضح قوة الاستعلامات الفرعية المتداخلة.

#========================

✅ 3. إنشاء الفهارس (Indexes)
sql
CREATE INDEX name_index ON people (name);
CREATE INDEX person_index ON stars (person_id);
ملاحظة مهمة: بعد إنشاء الفهارس، الاستعلام أعطى نفس النتائج لكن بسرعة أكبر. الفهارس لا تغير النتائج، بل تسرع البحث فقط (خاصة في الجداول الكبيرة مثل IMDb التي تحتوي على ملايين السجلات).

#========================

  SELECT title
FROM shows
WHERE id IN (
    SELECT show_id
    FROM ratings
    WHERE rating >= 6.0
    LIMIT 10
);

#=====================
SELECT * FROM shows
  JOIN ratings ON shows.id = ratings.show_id
  WHERE rating >= 6.0
  LIMIT 10;


#======================
SELECT * FROM genres
LIMIT 10;

#================
SELECT title FROM shows
WHERE id IN (
  SELECT show_id FROM genres
  WHERE genre = 'Comedy'
  LIMIT 10
);

#======================

SELECT * FROM shows
JOIN genres
ON shows.id = genres.show_id
WHERE id = 63881;

#==================
SELECT name FROM people WHERE id IN 
    (SELECT person_id FROM stars WHERE show_id = 
        (SELECT id FROM shows WHERE title = 'The Office' AND year = 2005));


#====================
SELECT title FROM shows
JOIN stars ON shows.id = stars.show_id
JOIN people ON stars.person_id = people.id
WHERE name = 'Steve Carell';

#=============================
SELECT title FROM shows, stars, people 
WHERE shows.id = stars.show_id
AND people.id = stars.person_id
AND name = 'Steve Carell';

#'=============================
CREATE INDEX name_index ON people (name);
CREATE INDEX person_index ON stars (person_id);

#======================
SELECT title FROM shows WHERE id IN 
    (SELECT show_id FROM stars WHERE person_id = 
        (SELECT id FROM people WHERE name = 'Steve Carell'));
#===============================

 from cs50 import SQL

#================
