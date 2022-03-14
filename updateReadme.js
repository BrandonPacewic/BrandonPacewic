document.addEventListener('DOMContentLoaded', () => {
    const pElement = document.querySelector('.loading-bar-paragraph');
    const lineLimit = 15;
    let currentString = '';

    while (true) {
        setTimeout(() => {
            pElement.innerHTML = currentString;
    
            if (currentString.length < lineLimit) {
                currentString += '=';
            }
            else {
                currentString = '';
            }
        });
    }
});