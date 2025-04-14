import React from 'react';

const AwardList = ({ students }) => {
    const calculateAward = (marks) => {
        if (marks >= 90) return 'Gold Medal';
        if (marks >= 75) return 'Silver Medal';
        if (marks >= 50) return 'Bronze Medal';
        return 'Participation Certificate';
    };

    return (
        <ul>
            {students.map((student, index) => (
                <li key={index}>
                    {student.name} - {student.marks} Marks - {calculateAward(student.marks)}
                </li>
            ))}
        </ul>
    );
};

export default AwardList;