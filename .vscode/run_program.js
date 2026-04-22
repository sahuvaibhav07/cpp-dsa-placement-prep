const { execSync, spawn } = require('child_process');
const path = require('path');
const fs = require('fs');

// Get the active file path from command line arguments
const activeFile = process.argv[2];

if (!activeFile) {
    console.error("Error: No file provided");
    process.exit(1);
}

// Get the directory and filename
const dir = path.dirname(activeFile);
const fileBasename = path.basename(activeFile, path.extname(activeFile));
const exePath = path.join(dir, fileBasename + '.exe');

console.log(`\n========== Running: ${fileBasename}.exe ==========\n`);

// Check if exe exists
if (!fs.existsSync(exePath)) {
    console.error(`Error: Executable not found: ${exePath}`);
    console.error("Please compile the program first.");
    process.exit(1);
}

// Run the executable and capture output
try {
    const output = execSync(exePath, {
        cwd: dir,
        encoding: 'utf-8',
        stdio: 'pipe'
    });
    
    console.log(output);
    console.log(`\n========== Program Finished ==========\n`);
} catch (error) {
    console.error(error.stdout || error.message);
    if (error.stderr) {
        console.error(error.stderr);
    }
    process.exit(error.status || 1);
}
