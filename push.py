import os
import subprocess

# Get the current directory
cwd = os.getcwd()

# Check the status of the Git repository
status = subprocess.run(["git", "status"], capture_output=True, text=True)

# Check if there are any untracked files
if "Untracked files:" in status.stdout:
    # Add all untracked files
    subprocess.run(["git", "add", "."])
    print("Added all untracked files.")

# Commit the changes
commit_message = input("Enter a commit message: ")
subprocess.run(["git", "commit", "-m", commit_message])
print("Committed changes.")

# Push the changes to the remote repository
subprocess.run(["git", "push"])
print("Pushed changes to GitHub")
