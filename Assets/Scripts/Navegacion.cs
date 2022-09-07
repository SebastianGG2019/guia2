using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;




public class Navegacion : MonoBehaviour
{
    
    public void Load(int level){
        SceneManager.LoadScene(level);

        
    }

}
