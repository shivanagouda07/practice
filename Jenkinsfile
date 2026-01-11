pipeline {
    agent any
        stages {
            stage("parellel stages") {
                parellel{
                  stage('Test stage') {
                    steps {
                        sh '''
                            python3 even.py
                                echo "Test the stage"
                                '''
            }
        }

                    stage("Test1 stage running parellel") {
                        steps {
                            echo "this is just a parellel stage"
                        }
                    }

                    
    }



                
}
        }
}

