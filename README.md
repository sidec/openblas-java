### Setup

To use it in your maven project, setup repositories directly in pom.xml:


```xml
<repositories>
        <repository>
                <id>openblas-java</id>
                <name>openblas-java releases</name>
                <url>https://raw.github.com/sidec/openblas-java/releases</url>
        </repository>
        <repository>
                <id>openblas-java</id>
                <name>openblas-java snapshots</name>
                <url>https://raw.github.com/sidec/openblas-java/snapshots</url>
        </repository>
</repositories>
```

Then you can add a dependency to your project:

```xml
<dependency>
          <groupId>org.bitbucket.ioplus</groupId>
          <artifactId>openblas-java</artifactId>
          <version>0.0.2-SNAPSHOT</version>
</dependency>
```

Or, for the latest release:

```xml
<dependency>
          <groupId>org.bitbucket.ioplus</groupId>
          <artifactId>openblas-java</artifactId>
          <version>0.0.1</version>
</dependency>
```
