
package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
)

func main() {
	url := "https://api.ksv.com/data"

	response, err := http.Get(url)
	if err != nil {
		fmt.Println("An error occurred:", err)
		return
	}
	defer response.Body.Close()

	body, err := ioutil.ReadAll(response.Body)
	if err != nil {
		fmt.Println("An error occurred:", err)
		return
	}

	fmt.Println(string(body))
}





func dec() {
	url := "https://api.example.com/data"

	response, err := http.Get(url)
	if err != nil {
		fmt.Println("An error occurred:", err)
		return
	}
	defer response.Body.Close()

	body, err := ioutil.ReadAll(response.Body)
	if err != nil {
		fmt.Println("An error occurred:", err)
		return
	}

	fmt.Println(string(body))
}


