// LocalStorage helper functions

const Storage = {

    // Keys for localStorage
    KEYS: {
        HIGH_SCORE: 'quizHighScore'
    },

    saveHighScore(score) {
        // Basic structure, incomplete implementation
    },

    getHighScore() {
        const score = localStorage.getItem(this.KEYS.HIGH_SCORE);
        return score ? parseInt(score) : 0;
    },

    saveQuizHistory(result) {
        // Placeholder for saving quiz attempts
    },

    getQuizHistory() {
        // Placeholder for retrieving quiz attempts
    }
};