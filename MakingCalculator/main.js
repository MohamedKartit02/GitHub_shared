// Get the necessary elements from the HTML
const resultPara = document.querySelector(".result-para");
const buttons = document.querySelectorAll(
  ".Number-Button, .addiction, .subtraction, .multplucation, .division, .Cbutton, .go-back, .show-results"
);

// Initialize the calculator variables
let operand1 = "";
let operator = "";
let operand2 = "";
buffer = "0";

// Add event listeners to the buttons
buttons.forEach(function (button) {
  button.addEventListener("click", function () {
    const buttonText = button.innerText;

    if (button.classList.contains("Number-Button")) {
      handleNumberClick(buttonText);
    } else if (
      button.classList.contains("addiction") ||
      button.classList.contains("subtraction") ||
      button.classList.contains("multplucation") ||
      button.classList.contains("division")
    ) {
      handleOperatorClick(buttonText);
    } else if (button.classList.contains("show-results")) {
      handleResultClick();
    } else if (button.classList.contains("Cbutton")) {
      clearCalculator();
    } else if (button.classList.contains("go-back")) {
      goBack();
    }
  });
});

// Function to handle number button clicks
function handleNumberClick(number) {
  if (operator === "") {
    if (number === "0") {
      operand1 = buffer;
      resultPara.innerText = "0";
    } else {
      operand1 += number;
      resultPara.innerText = operand1;
    }
  } else {
    if (number === "0") {
      operand2 = number;
      resultPara.innerText = "0";
    } else {
      operand2 += number;
      resultPara.innerText = operand2;
    }
  }
}

// Function to handle operator button clicks
function handleOperatorClick(op) {
  operator = op;
}

// Function to handle result button click
function handleResultClick() {
  const num1 = parseFloat(operand1);
  const num2 = parseFloat(operand2);
  let result = 0;

  if (operator === "+") {
    result = num1 + num2;
  } else if (operator === "-") {
    result = num1 - num2;
  } else if (operator === "x") {
    result = num1 * num2;
  } else if (operator === "/") {
    result = num1 / num2;
  }

  resultPara.innerText = result;
  operand1 = result.toString();
  operand2 = "";
  operator = "";
}

// Function to clear the calculator
function clearCalculator() {
  operand1 = "";
  operand2 = "";
  operator = "";
  resultPara.innerText = "0";
}

// Function to go back one step
function goBack() {
  if (operator === "") {
    if (operand1.length === 1) {
      resultPara.innerText = buffer;
    } else {
      operand1 = operand1.slice(0, -1);
      resultPara.innerText = operand1;
    }
  } else {
    if (operand2.length === 1) {
      resultPara.innerText = buffer;
    } else {
      operand2 = operand2.slice(0, -1);
      resultPara.innerText = operand2;
    }
  }
}
