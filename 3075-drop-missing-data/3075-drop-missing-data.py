import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    
    students = students.dropna(subset = 'name', inplace = None)

    return students