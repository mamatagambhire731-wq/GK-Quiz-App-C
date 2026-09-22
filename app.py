import streamlit as st

st.title("🧠 General Knowledge Quiz")

questions = [
    {
        "question": "What is the capital of India?",
        "options": ["Mumbai", "Delhi", "Kolkata", "Chennai"],
        "answer": "Delhi"
    },
    {
        "question": "Which planet is called the Red Planet?",
        "options": ["Earth", "Mars", "Venus", "Jupiter"],
        "answer": "Mars"
    }
]

if "score" not in st.session_state:
    st.session_state.score = 0
    st.session_state.q = 0

if st.session_state.q < len(questions):
    q = questions[st.session_state.q]

    st.subheader(f"Question {st.session_state.q + 1}")
    choice = st.radio(q["question"], q["options"])

    if st.button("Next"):
        if choice == q["answer"]:
            st.session_state.score += 1
        st.session_state.q += 1
        st.rerun()

else:
    st.success(f"🎉 Your Score: {st.session_state.score}/{len(questions)}")
