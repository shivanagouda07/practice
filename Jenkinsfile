pipeline {
    agent any
        stages {
            stage('Test stage') {
                steps {
                sh '''
                    python3 even.sh
                    echo"Test the stage"
                    '''
            }
        }
    }
}
