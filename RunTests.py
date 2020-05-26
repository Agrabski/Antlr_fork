import subprocess
import os
import shutil
from pathlib import Path

def runProcess(path):
	x = subprocess.call([str(path.absolute())])
	return x == 0


def runTests(binaryPath):
	files = Path(binaryPath).rglob("*.exe")
	for file in files:
		if not runProcess(file):
			return (False, file)
	return (True, "")

if __name__ == "__main__":
	pass
if os.system("mvn install -DskipTests"):
	print("Antlr build failed, aborting")
	exit()
antlrPath = "RuntimeIntegrationTests/antlr.jar"
shutil.move("tool/target/antlr4-4.7.2-complete.jar", antlrPath)

files = Path("RuntimeIntegrationTests").rglob("*.g4")

for f in files:
	print(f.name)
	subprocess.call(['java', '-jar', antlrPath, "-Dlanguage=Cpp", os.path.abspath(f), "-visitor"])

if subprocess.call(['msbuild', "RuntimeIntegrationTests\\RuntimeIntegrationTests.sln", "/restore"]):
	print("Testcase build failed, aborting")
	exit()
binaryPath = "RuntimeIntegrationTests\\x64\\Debug\\"
result = runTests(binaryPath)
if not result[0]:
	print("Test failed. Failing case: " + result[1])


