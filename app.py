

import streamlit as st

st.set_page_config(page_title="GK Quiz App", page_icon="🧠")

st.title("🧠 General Knowledge Quiz")
st.write("Welcome! Answer all 15 questions and check your score.")

# 15 General Knowledge Questions
questions = [
    {"question": "1. What is the capital of India?",
     "options": ["Mumbai", "Delhi", "Kolkata", "Chennai"],
     "answer": "Delhi"},

    {"question": "2. Which planet is called the Red Planet?",
     "options": ["Earth", "Mars", "Venus", "Jupiter"],
     "answer": "Mars"},

    {"question": "3. How many days are there in a week?",
     "options": ["5", "6", "7", "8"],
     "answer": "7"},

    {"question": "4. Who wrote the Indian National Anthem?",
     "options": ["Rabindranath Tagore", "Mahatma Gandhi", "B. R. Ambedkar", "Jawaharlal Nehru"],
     "answer": "Rabindranath Tagore"},

    {"question": "5. Which is the largest ocean in the world?",
     "options": ["Indian Ocean", "Atlantic Ocean", "Pacific Ocean", "Arctic Ocean"],
     "answer": "Pacific Ocean"},

    {"question": "6. Which is the largest continent in the world?",
     "options": ["Africa", "Europe", "Asia", "Australia"],
     "answer": "Asia"},

    {"question": "7. Which is the national animal of India?",
     "options": ["Lion", "Tiger", "Elephant", "Peacock"],
     "answer": "Tiger"},

    {"question": "8. Which gas do plants absorb from the atmosphere?",
     "options": ["Oxygen", "Nitrogen", "Carbon Dioxide", "Hydrogen"],
     "answer": "Carbon Dioxide"},

    {"question": "9. How many states are there in India?",
     "options": ["28", "29", "30", "27"],
     "answer": "28"},

    {"question": "10. Which is the longest river in India?",
     "options": ["Yamuna", "Godavari", "Ganga", "Narmada"],
     "answer": "Ganga"},

    {"question": "11. Which is the smallest planet in the Solar System?",
     "options": ["Mercury", "Mars", "Venus", "Earth"],
     "answer": "Mercury"},

    {"question": "12. Who is known as the Father of the Nation in India?",
     "options": ["Jawaharlal Nehru", "Mahatma Gandhi", "Sardar Patel", "Subhas Chandra Bose"],
     "answer": "Mahatma Gandhi"},

    {"question": "13. What is the national flower of India?",
     "options": ["Rose", "Sunflower", "Lotus", "Lily"],
     "answer": "Lotus"},

    {"question": "14. Which is the tallest mountain in the world?",
     "options": ["Mount Everest", "K2", "Kangchenjunga", "Makalu"],
     "answer": "Mount Everest"},

    {"question": "15. Which country is known as the Land of the Rising Sun?",
     "options": ["China", "Japan", "Thailand", "South Korea"],
     "answer": "Japan"}
]

# Session state
if "q_index" not in st.session_state:
    st.session_state.q_index = 0
    st.session_state.score = 0

# Progress bar
st.progress((st.session_state.q_index) / len(questions))

# Quiz
if st.session_state.q_index < len(questions):
    q = questions[st.session_state.q_index]

    st.subheader(f"Question {st.session_state.q_index + 1} of {len(questions)}")

    choice = st.radio(
        q["question"],
        q["options"],
        key=st.session_state.q_index
    )

    if st.button("Next ➡️"):
        if choice == q["answer"]:
            st.session_state.score += 1

        st.session_state.q_index += 1
        st.rerun()

# Result
else:
    st.success("🎉 Quiz Completed!")

    score = st.session_state.score
    total = len(questions)
    percent = (score / total) * 100

    st.header(f"Your Score: {score}/{total}")
    st.write(f"**Percentage:** {percent:.1f}%")

    if score >= 13:
        st.balloons()
        st.success("🏆 Grade A+ : Excellent!")
    elif score >= 10:
        st.success("🥇 Grade A : Very Good!")
    elif score >= 7:
        st.info("🥈 Grade B : Good Job!")
    else:
        st.warning("📚 Grade C : Keep Learning!")

    if st.button("🔄 Play Again"):
        st.session_state.q_index = 0
        st.session_state.score = 0
        st.rerun()
