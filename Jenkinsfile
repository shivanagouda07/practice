pipeline {
    agent any
        stages {
            stage('Test stage') {
                steps {
                sh '''
                    python3 even.py
                    echo "Test the stage"
                    '''
            }
        }
    }
}
