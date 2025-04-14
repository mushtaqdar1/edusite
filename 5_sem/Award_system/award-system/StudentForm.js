import React, { useState } from 'react';

const StudentForm = ({ addStudent }) => {
    const [name, setName] = useState('');
    const [marks, setMarks] = useState('');

    const handleSubmit = (e) => {
        e.preventDefault();
        if (!name || !marks) return;
        addStudent({ name, marks: parseFloat(marks) });
        setName('');
        setMarks('');
    };

    return (
        <form onSubmit={handleSubmit}>
            <input
                type="text"
                placeholder="Enter Student Name"
                value={name}
                onChange={(e) => setName(e.target.value)}
            />
            <input
                type="number"
                placeholder="Enter Marks"
                value={marks}
                onChange={(e) => setMarks(e.target.value)}
            />
            <button type="submit">Add Student</button>
        </form>
    );
};

export default StudentForm;