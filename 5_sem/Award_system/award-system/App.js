import React, { useState } from 'react';
import StudentForm from './StudentForm';
import AwardList from './AwardList';

const App = () => {
    const [students, setStudents] = useState([]);

    const addStudent = (student) => {
        setStudents([...students, student]);
    };

    return (
        <div>
            <h1>Award System</h1>
            <StudentForm addStudent={addStudent} />
            <AwardList students={students} />
        </div>
    );
};

export default App;