# Maven Linux Cheat Sheet

## Installation & Setup

### Install Maven on Linux
```bash
# Ubuntu/Debian
sudo apt update
sudo apt install maven

# Red Hat/CentOS/Fedora
sudo yum install maven

# Check version
mvn -version
```

### Environment Variables
```bash
# Add to ~/.bashrc or ~/.bash_profile
export MAVEN_HOME=/usr/share/maven
export PATH=$PATH:$MAVEN_HOME/bin
```

## Project Creation & Management

### Create New Project
```bash
# Interactive mode
mvn archetype:generate

# Quick start project
mvn archetype:generate -DgroupId=com.example -DartifactId=myapp \
  -DarchetypeArtifactId=maven-archetype-quickstart -DinteractiveMode=false

# Web application
mvn archetype:generate -DgroupId=com.example -DartifactId=webapp \
  -DarchetypeArtifactId=maven-archetype-webapp -DinteractiveMode=false
```

## Build Lifecycle Commands

### Basic Commands
```bash
mvn clean              # Clean the project
mvn compile            # Compile source code
mvn test               # Run unit tests
mvn package            # Create JAR/WAR file
mvn install            # Install to local repository
mvn deploy             # Deploy to remote repository
mvn verify             # Run integration tests
```

### Combined Commands
```bash
mvn clean install      # Clean and install
mvn clean package      # Clean and package
mvn clean test         # Clean and test
mvn clean verify       # Clean and verify
```

## Dependency Management

### Update Dependencies
```bash
mvn dependency:tree              # Show dependency tree
mvn dependency:resolve           # Download dependencies
mvn dependency:purge-local-repository  # Clean local repo
mvn versions:display-dependency-updates  # Check for updates
```

### Analyze Dependencies
```bash
mvn dependency:analyze           # Find unused/undeclared dependencies
mvn dependency:list              # List all dependencies
```

## Testing

### Test Commands
```bash
mvn test                         # Run all tests
mvn test -Dtest=TestClassName    # Run specific test class
mvn test -Dtest=TestClass#method # Run specific test method
mvn test -DskipTests             # Skip test execution
mvn clean install -DskipTests    # Build without running tests
```

## Running & Execution

### Execute Main Class
```bash
mvn exec:java -Dexec.mainClass="com.example.Main"
mvn exec:java -Dexec.mainClass="com.example.Main" -Dexec.args="arg1 arg2"
```

### Spring Boot
```bash
mvn spring-boot:run              # Run Spring Boot application
mvn spring-boot:run -Dspring-boot.run.arguments="--server.port=8081"
```

## Useful Options

### Common Flags
```bash
-X                      # Debug output
-e                      # Show error stack traces
-q                      # Quiet mode
-U                      # Force update snapshots
-o                      # Offline mode
-T 4                    # Use 4 threads for build
-P profile-name         # Activate specific profile
-DskipTests            # Skip running tests
-Dmaven.test.skip=true # Skip compiling and running tests
```

### Performance
```bash
mvn clean install -T 4           # Multi-threaded build (4 threads)
mvn clean install -o             # Offline build
mvn clean install -DskipTests -T 4  # Fast build
```

## Repository Management

### Local Repository
```bash
# Default location: ~/.m2/repository

# Clean local repository
rm -rf ~/.m2/repository

# List installed artifacts
ls ~/.m2/repository/com/example/myapp
```

### Remote Repository
```bash
mvn deploy                       # Deploy to remote repo
mvn deploy:deploy-file -Dfile=myjar.jar -DgroupId=com.example \
  -DartifactId=myapp -Dversion=1.0 -Dpackaging=jar -Durl=http://repo.url
```

## Plugin Management

### Common Plugins
```bash
mvn compiler:compile             # Compile plugin
mvn surefire:test               # Test plugin
mvn jar:jar                     # JAR plugin
mvn war:war                     # WAR plugin
mvn javadoc:javadoc            # Generate Javadoc
mvn site:site                   # Generate project site
```

## Troubleshooting

### Common Issues
```bash
# Clear Maven cache
rm -rf ~/.m2/repository

# Force update dependencies
mvn clean install -U

# Debug build
mvn clean install -X

# Check effective POM
mvn help:effective-pom

# Check active profiles
mvn help:active-profiles

# Display plugin information
mvn help:describe -Dplugin=compiler
```

## Useful Shortcuts & Tips

### Bash Aliases (add to ~/.bashrc)
```bash
alias mci='mvn clean install'
alias mcp='mvn clean package'
alias mct='mvn clean test'
alias mcist='mvn clean install -DskipTests'
alias mdt='mvn dependency:tree'
```

### Quick Checks
```bash
mvn validate                    # Validate project structure
mvn help:system                 # Display system properties
mvn -version                    # Show Maven version
```

## POM File Quick Reference

### Basic Structure
```xml
<project>
    <modelVersion>4.0.0</modelVersion>
    <groupId>com.example</groupId>
    <artifactId>myapp</artifactId>
    <version>1.0-SNAPSHOT</version>
    <packaging>jar</packaging>
    
    <dependencies>
        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit</artifactId>
            <version>4.13.2</version>
            <scope>test</scope>
        </dependency>
    </dependencies>
</project>
```

## File Locations

```
~/.m2/settings.xml      # User settings
~/.m2/repository/       # Local repository
/etc/maven/settings.xml # Global settings
pom.xml                 # Project configuration
```
