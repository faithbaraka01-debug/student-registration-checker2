const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});


readline.question('Enter student name: ', name => {
  readline.question('Enter number of registered units: ', unitsInput => {
    const units = parseInt(unitsInput);


    const status = (units > 7) ? "Overload - Approval Required" : "Registration Accepted";


    console.log("\n--- Registration Summary ---");
    console.log(`Student Name: ${name}`);
    console.log(`Registered Units: ${units}`);
    console.log(`Status: ${status}`);

    readline.close();
  });
});