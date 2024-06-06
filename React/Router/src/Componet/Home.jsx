import React from 'react'
import { useNavigate,} from 'react-router-dom'

export function Home() {
        const navigator = useNavigate()

        function goToAbout()
        {
            navigator("/about")
        }

    return (
        <>
            <h1>This is home page</h1>
            <button onClick={goToAbout}>About</button>
        </>
    )
}
